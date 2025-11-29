@class UIScrollView, WecoinNewUserTips;

@interface WCCoinNewUserTipsDetailView : UIView

@property (retain, nonatomic) WecoinNewUserTips *tips;
@property (retain, nonatomic) UIScrollView *scrollView;

- (id)initWithData:(id)a0;
- (void)layout;
- (void)layoutSubviews;
- (void)done;
- (double)maxPopupHeight;
- (void).cxx_destruct;

@end
