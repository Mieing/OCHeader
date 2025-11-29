@class UIView;
@protocol AWEEnterpriseIMMessageViewProtocol;

@interface AWEIMSmartCardTableViewCell : AWEIMLynxContainerBaseTableViewCell {
    UIView<AWEEnterpriseIMMessageViewProtocol> *_enterpriseLynxEngine;
}

@property (retain, nonatomic) UIView *hookTapGestureView;

+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (void)clickUnsupportTips;
- (id)enterpriseLynxEngine;
- (void)setEnterpriseLynxEngine:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
