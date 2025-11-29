@class WCFinderLocationTerminatorViewParams, UIView, MMUIButton, InteractionLabel;
@protocol WCFinderLocationTerminatorViewDelegate;

@interface WCFinderLocationTerminatorView : MMUIView

@property (retain, nonatomic) WCFinderLocationTerminatorViewParams *params;
@property (retain, nonatomic) UIView *leftLineView;
@property (retain, nonatomic) UIView *rightLineView;
@property (retain, nonatomic) MMUIButton *iconImageView;
@property (retain, nonatomic) InteractionLabel *titleLabel;
@property (retain, nonatomic) InteractionLabel *subtitleLabel;
@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (weak, nonatomic) id<WCFinderLocationTerminatorViewDelegate> delegate;

+ (double)maxContentWidthWithTotalWidth:(double)a0;
+ (double)heightForParams:(id)a0 width:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 params:(id)a1;
- (void)initView;
- (void)initLineView;
- (id)createLineView;
- (void)initContentView;
- (void)layoutSubviews;
- (void)updateSubContentSize;
- (double)contentHeight;
- (void)onClickIconImageView;
- (void)onClickTitleLabel;
- (void)onClickSubtitleLabel;
- (void)makeLeftRightLineViewAnchorHeight;
- (void).cxx_destruct;

@end
