@class AWEAwemeModel, UIView, AWESearchCommonAbstractViewController, AWESearchHalfPanelTitleView, NSString, UIImageView, NSDictionary, UILabel;
@protocol AWESearchHalfPanelInteractionProtocal, AWESearchHalfPanelViewModelProtocol, AWESearchEntryElementProtocol;

@interface AWESearchHalfPanelViewController : UIViewController <AWESearchCommonAbstractProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView<AWESearchEntryElementProtocol> *discoverEntranceView;
@property (retain, nonatomic) AWESearchHalfPanelTitleView *contentHeaderView;
@property (retain, nonatomic) UIImageView *buttonIcon;
@property (retain, nonatomic) UILabel *buttonTitle;
@property (nonatomic) double containerRatio;
@property (nonatomic) double lastOffsetY;
@property (nonatomic) double lastOffsetX;
@property (nonatomic) double containerHeight;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) id<AWESearchHalfPanelViewModelProtocol> halfPanelViewModel;
@property (retain, nonatomic) AWESearchCommonAbstractViewController *commonViewController;
@property (retain, nonatomic) NSDictionary *logParamDict;
@property (weak, nonatomic) id<AWESearchHalfPanelInteractionProtocal> delagete;
@property (nonatomic) double currentPlayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setContainerViewHeight:(double)a0;
- (void)updateSectionStatusWithTime:(double)a0;
- (void)handleScrollPanGesture:(id)a0;
- (id)initWithLogParams:(id)a0;
- (void)closeSearchHalfPanel;
- (void)seekVideoWithJumpTime:(double)a0 awemeID:(id)a1;
- (BOOL)hitAbstractPanelUIExp;
- (void)handleContentHeaderFullScreenPanGesture:(id)a0;
- (void)handleContainerFullScreenPanGesture:(id)a0;
- (void)handleContentHeaderPanGesture:(id)a0;
- (void)handleContainerPanGesture:(id)a0;
- (void)resizeVideoWhenDragWithTranslation:(struct CGPoint { double x0; double x1; })a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)containerInitialTop;
- (void)clickHeaderView;
- (BOOL)hitAbstractPanelAnchorExp;
- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (double)headerHeight;
- (void)viewDidLoad;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
