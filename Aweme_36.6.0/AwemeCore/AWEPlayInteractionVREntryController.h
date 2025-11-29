@class NSString, UIImageView, UIView, UILabel, UITapGestureRecognizer;

@interface AWEPlayInteractionVREntryController : AWEPlayInteractionBaseController <AWEFeedPicoVRViewControllerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *singleTap;
@property (retain, nonatomic) UIView *entryBackgroundView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivateControllerWithModel:(id)a0 context:(id)a1 container:(id)a2;
+ (unsigned long long)controllerLazyLoadStrategy;

- (void)configBeforEnterToPicoVRPage;
- (id)contentLabelFont;
- (id)contentLabelTextColor;
- (void)backgroundControlClick;
- (void)adjustEntryPositionIfNeeded;
- (double)backgroundViewHeight;
- (void)removeUI;
- (double)spaceBetweenIconAndBackground;
- (double)spaceBetweenIconAndLabel;
- (double)spaceBetweenLabelAndBackground;
- (id)contentLabelText;
- (void)quitFromPicoVRPage:(id)a0;
- (double)backgroundViewWidth;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (double)iconWidth;
- (void)viewDidLoad;
- (double)iconHeight;
- (void)initUI;

@end
