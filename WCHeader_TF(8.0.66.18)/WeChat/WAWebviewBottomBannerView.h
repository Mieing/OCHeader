@class UIView, MMWebImageView, NSArray, UIImageView, WCTagsView, WAWebviewHighlightedBottomBannerView, WAWebViewBottomBannerViewModel, UILabel;
@protocol WAWebviewBottomBannerViewDelegate;

@interface WAWebviewBottomBannerView : UIView

@property (retain, nonatomic) MMWebImageView *iconImgView;
@property (retain, nonatomic) UIView *mmHeadImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *titleTailLabel;
@property (retain, nonatomic) UIImageView *originalIcon;
@property (retain, nonatomic) UIImageView *leftCornerImgView;
@property (retain, nonatomic) UIImageView *rightCornerImgView;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) WCTagsView *tagsView;
@property (retain, nonatomic) WAWebviewHighlightedBottomBannerView *highlightedBannerView;
@property (retain, nonatomic) WAWebViewBottomBannerViewModel *viewModel;
@property (weak, nonatomic) id<WAWebviewBottomBannerViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)reloadData;
- (void)highlightBannerView:(BOOL)a0;
- (void)generateButtons;
- (void)onButtonClicked:(id)a0;
- (void)onHighlightedBottomBannerViewClicked;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
