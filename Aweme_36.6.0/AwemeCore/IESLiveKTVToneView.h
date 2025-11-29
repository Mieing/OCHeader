@class NSString, UIView, NSMutableArray, UIButton;

@interface IESLiveKTVToneView : UIView

@property (retain, nonatomic) UIButton *subToneBtn;
@property (retain, nonatomic) UIButton *addToneBtn;
@property (retain, nonatomic) UIView *toneLevelBackgroundView;
@property (retain, nonatomic) NSMutableArray *toneLevelViews;
@property (nonatomic) double value;
@property (copy, nonatomic) id /* block */ valueChangedEvent;
@property (nonatomic) BOOL shieldInChorus;
@property (copy, nonatomic) NSString *unableToast;

- (id)createBtnWithImageName:(id)a0;
- (void)toneValueChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
