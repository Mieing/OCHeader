@class NSString, MMUILabel, MMUIButton;
@protocol MMFinderLiveShopShelfSubPageHeaderViewDelegate;

@interface MMFinderLiveShopShelfSubPageHeaderView : UIView

@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (weak, nonatomic) id<MMFinderLiveShopShelfSubPageHeaderViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)initView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onClickLeftButton:(id)a0;
- (void).cxx_destruct;

@end
