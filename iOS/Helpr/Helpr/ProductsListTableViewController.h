//
//  ProductsListTableViewController.h
//  Helpr
//
//  Created by Vladimir Petrov on 06/08/2014.
//  Copyright (c) 2014 James Nocentini. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "DropDownListView.h"


@interface ProductsListTableViewController : UITableViewController<kDropDownListViewDelegate>
{
    DropDownListView * Dropobj;
}
- (void)loadProducts;

@end
