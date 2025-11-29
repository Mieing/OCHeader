@class NSString, NSNumber;

@interface IESIMContactPickerConfirmConfig : NSObject

@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *bottomTips;
@property (nonatomic) BOOL hideInLoadingState;
@property (retain, nonatomic) NSNumber *minimumSelectCount;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ confirmDisableBlock;
@property (nonatomic) BOOL needDismissPageByConfirm;

- (void).cxx_destruct;

@end
