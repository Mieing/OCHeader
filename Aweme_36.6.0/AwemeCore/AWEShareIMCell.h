@class UIStackView, UILongPressGestureRecognizer, NSString, UIImageView, BDImageView, DUXCheckBox, YYLabel, UILabel;
@protocol AWEShareCellItem;

@interface AWEShareIMCell : UICollectionViewCell <AWEIMStreakDisplayManagerDelegate, AWEShareCell>

@property (retain, nonatomic) UIImageView *activeDot;
@property (retain, nonatomic) UIImageView *activeDotContainer;
@property (retain, nonatomic) UIImageView *checkBoxContainer;
@property (retain, nonatomic) DUXCheckBox *checkBox;
@property (retain, nonatomic) UIImageView *hasShareDotCheckMark;
@property (retain, nonatomic) UIImageView *hasShareDotCheckMarkContainer;
@property (retain, nonatomic) UIImageView *airplaneDotView;
@property (retain, nonatomic) UIImageView *airplaneDotContainer;
@property (retain, nonatomic) UIImageView *aiTagImageView;
@property (weak, nonatomic) id<AWEShareCellItem> viewModel;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) UIStackView *descLabelStackView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *smallImageView;
@property (retain, nonatomic) UIImageView *selectImageView;
@property (retain, nonatomic) UIImageView *selectContainer;
@property (retain, nonatomic) BDImageView *bottomCenterImageView;
@property (retain, nonatomic) YYLabel *descLabel;
@property (nonatomic) BOOL scalesImageWhenHighlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)asyncDidUpdateIMStreakView;
- (BOOL)hitStreakUpdateExp;
- (void)longPressGesHandler:(id)a0;
- (void)addLongPressGesForAvatar;
- (void)adaptDotBigFont;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (id)gestureRecognizers;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithViewModel:(id)a0;

@end
