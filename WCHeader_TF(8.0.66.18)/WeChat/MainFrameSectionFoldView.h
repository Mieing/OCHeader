@class MFBannerBtn, UIView;
@protocol MainFrameSectionFoldViewDelegate;

@interface MainFrameSectionFoldView : UIView

@property (nonatomic) BOOL isFolding;
@property (nonatomic) long long foldCount;
@property (retain, nonatomic) UIView *topSeparatorView;
@property (retain, nonatomic) MFBannerBtn *bannerBtn;
@property (retain, nonatomic) UIView *bottomSeparatorView;
@property (weak, nonatomic) id<MainFrameSectionFoldViewDelegate> delegate;
@property (nonatomic) BOOL hideBottomLine;

+ (double)height;

- (id)reuseIdentifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIsFolding:(BOOL)a0 foldCount:(long long)a1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onSingleTap;
- (void).cxx_destruct;

@end
