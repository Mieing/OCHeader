@class NSArray, WCFinderJumpInfoDynamicCarouselTitleViewItem, NSString, UIView, MMUILabel;

@interface WCFinderJumpInfoDynamicCarouselTitleView : UIView <MMWebImageViewDelegate>

@property (retain, nonatomic) UIView *iconImageContainerView;
@property (copy, nonatomic) NSArray *iconImageViews;
@property (retain, nonatomic) MMUILabel *textLabel;
@property (readonly, nonatomic) WCFinderJumpInfoDynamicCarouselTitleViewItem *viewItem;
@property (copy, nonatomic) id /* block */ contentSizeDidChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createIconImageView;
+ (id)createTextLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)loadSubviews;
- (void)updateViewItem:(id)a0;
- (void)updateContent;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })iconSizeThatFits:(id)a0 withMaxHeight:(double)a1;
- (void)layoutSubviews;
- (void)contentSizeDidChange;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
