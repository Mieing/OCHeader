@class BannerButton, UIView;
@protocol SessionSelectSectionFoldViewDelegate;

@interface SessionSelectSectionFoldView : UIView

@property (nonatomic) BOOL isFolding;
@property (nonatomic) long long foldCount;
@property (retain, nonatomic) UIView *topSeparatorView;
@property (retain, nonatomic) BannerButton *bannerBtn;
@property (retain, nonatomic) UIView *bottomSeparatorView;
@property (weak, nonatomic) id<SessionSelectSectionFoldViewDelegate> delegate;
@property (nonatomic) BOOL hideBottomLine;
@property (nonatomic) double contentMarginLeft;

+ (double)height;

- (id)reuseIdentifier;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIsFolding:(BOOL)a0 foldCount:(long long)a1;
- (void)layoutSubviews;
- (void)onSingleTap;
- (void).cxx_destruct;

@end
