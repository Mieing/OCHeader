@class UIView, NSString, UITapGestureRecognizer, AWESearchProfileSideBarItemModel, DUXBaseImageView, NSDictionary, UILabel, DUXBadge;

@interface AWESearchSideBarTopButton : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) DUXBaseImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) id /* block */ clickContainerBlock;
@property (retain, nonatomic) DUXBadge *dotBadge;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWESearchProfileSideBarItemModel *model;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) double showTime;
@property (copy, nonatomic) NSDictionary *logExtraDic;

+ (double)horizontalCellPadding;
+ (double)imageViewSize;
+ (double)horizontalMargin;

- (void)awe_themeWillChange:(long long)a0;
- (BOOL)leftSideBarRedDotIsShow;
- (void)showLeftSideBarRedDot;
- (void)hideLeftSideBarRedDot;
- (double)leftSideBarStencilViewWidth;
- (void)trackShow;
- (void)trackClick;
- (void)p_addTapGesture;
- (void)p_actionClick;
- (void)p_resetUI;
- (void)p_layoutDotBadge;
- (id)p_commonTrackParams;
- (void)trackScanEnter;
- (void)p_setupUI;
- (void)updateRedDotCount:(unsigned long long)a0;
- (unsigned long long)p_clickDuration;
- (void)updateImageWithThemeStyle:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)updateWithModel:(id)a0;

@end
