@class UIColor, AWEEnterpriseIMMessageCardBaseViewModel, AWEUIDynamicColor;

@interface AWEIMEnterpriseContentProps : AWEIMUIViewPresenterProps

@property (nonatomic) long long messageType;
@property (nonatomic) BOOL viewInteractionEnabled;
@property (copy, nonatomic) id /* block */ didClickSubmitBlock;
@property (copy, nonatomic) id /* block */ didUpdateCellContentSizeBlock;
@property (copy, nonatomic) id /* block */ loadDurationBlock;
@property (nonatomic) BOOL hasBind;
@property (retain, nonatomic) AWEEnterpriseIMMessageCardBaseViewModel *enterpriseViewModel;
@property (retain, nonatomic) UIColor *viewBackgroundColor;
@property (retain, nonatomic) AWEUIDynamicColor *dynamicColor;
@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;

@end
