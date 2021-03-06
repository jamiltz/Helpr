//
//  Product.h
//  Helpr
//
//  Created by Vladimir Petrov on 06/08/2014.
//  Copyright (c) 2014 James Nocentini. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Product : NSObject

- (Product*) initFromJson:(NSDictionary*) jsonProduct;

@property ( nonatomic, copy ) NSString *title;
@property ( nonatomic, copy ) NSString *productDescription;

@property ( nonatomic, copy ) NSString *imageName;

@end
