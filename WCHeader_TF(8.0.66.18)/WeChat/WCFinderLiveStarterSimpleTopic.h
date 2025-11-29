@class MMUIImageView, NSString, MMGrowTextView, UIView;

@interface WCFinderLiveStarterSimpleTopic : MMUIView

@property (retain, nonatomic) MMUIImageView *leftImageView;
@property (retain, nonatomic) UIView *separateLineUnderDesc;
@property (retain, nonatomic) MMGrowTextView *growTextView;
@property (retain, nonatomic) NSString *placeHolder;
@property (nonatomic) BOOL isLandscape;
@property (copy, nonatomic) id /* block */ beginEdit;

- (id)initWithPlaceHolder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)updateLandscape:(BOOL)a0;
- (void)updateGrowTextViewFrameWhenEdit;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)beginEditClick;
- (void)updateGrowTextViewWithBulletinInfo:(id)a0 isGameMode:(BOOL)a1;
- (void).cxx_destruct;

@end
