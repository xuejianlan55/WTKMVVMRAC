//
//  WTKAddressManagerViewModel.h
//  WTKWineMVVM
//
//  Created by 王同科 on 16/10/25.
//  Copyright © 2016年 王同科. All rights reserved.
//

#import "WTKBasedViewModel.h"

@interface WTKAddressManagerViewModel : WTKBasedViewModel
///新建地址
@property(nonatomic,strong)RACCommand       *addAddressCommand;

@end
