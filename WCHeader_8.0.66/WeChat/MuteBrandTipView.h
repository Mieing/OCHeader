@class NSMutableArray, UIView;

@interface MuteBrandTipView : MMPageSheetBaseView

@property (retain, nonatomic) NSMutableArray *displayContactNameArr;
@property (retain, nonatomic) UIView *headView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *unreadLabel;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UIView *bigHeadImage;
@property (retain, nonatomic) UIView *bigView;
@property (retain, nonatomic) UIView *shadowView;

- (id)initWithContact:(id)a0;
- (void)showWithAnimated:(BOOL)a0;
- (void)pageSheetDidAppear;
- (void)initContactList:(id)a0;
- (id)centerImageView:(struct CGSize { double x0; double x1; })a0;
- (void)close;
- (void)startAnimation;
- (void)onDarkModeChange:(BOOL)a0;
- (void).cxx_destruct;

@end
