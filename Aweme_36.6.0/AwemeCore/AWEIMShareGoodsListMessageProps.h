@class UIColor, AWEEnterpriseIMMessageCardBaseViewModel;

@interface AWEIMShareGoodsListMessageProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ didClickSubmitBlock;
@property (copy, nonatomic) id /* block */ loadDurationBlock;
@property (retain, nonatomic) AWEEnterpriseIMMessageCardBaseViewModel *enterpriseViewModel;
@property (retain, nonatomic) UIColor *BGColor;

- (void).cxx_destruct;

@end
