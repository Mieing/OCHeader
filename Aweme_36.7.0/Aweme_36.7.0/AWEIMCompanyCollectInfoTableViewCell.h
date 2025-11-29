@class NSDate, UIView;
@protocol AWEEnterpriseIMMessageViewProtocol;

@interface AWEIMCompanyCollectInfoTableViewCell : AWEIMLynxContainerBaseTableViewCell {
    UIView<AWEEnterpriseIMMessageViewProtocol> *_enterpriseLynxEngine;
}

@property (retain, nonatomic) UIView *hookTapGestureView;
@property (copy, nonatomic) NSDate *lastClickTimeDate;

+ (double)recommendLynxHeightForMessage:(id)a0;
+ (id)identifier;

- (void)configWithMessage:(id)a0;
- (void)clickUnsupportTips;
- (id)enterpriseLynxEngine;
- (void)setEnterpriseLynxEngine:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)menuItems;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
