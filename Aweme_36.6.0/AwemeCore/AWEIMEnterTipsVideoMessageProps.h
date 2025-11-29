@class UIColor, AWEEnterpriseIMMessageCardBaseViewModel;

@interface AWEIMEnterTipsVideoMessageProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) AWEEnterpriseIMMessageCardBaseViewModel *enterpriseViewModel;
@property (retain, nonatomic) UIColor *enterpriseCardViewBGColor;
@property (copy, nonatomic) id /* block */ tapAction;

- (void).cxx_destruct;

@end
