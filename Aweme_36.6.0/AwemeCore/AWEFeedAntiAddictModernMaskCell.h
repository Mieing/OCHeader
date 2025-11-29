@class NSString, AWEAwemeModel, UIView, UIViewController;
@protocol AWEFeedTableViewCellViewControllerProtocol, UIScrollViewDelegate, AWEAntiAddictMaskViewControllerProtocol;

@interface AWEFeedAntiAddictModernMaskCell : UITableViewCell <AWEFeedTableViewCellProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIViewController<AWEFeedTableViewCellViewControllerProtocol, AWEAntiAddictMaskViewControllerProtocol> *viewController;
@property (nonatomic) long long indexPath;
@property (weak, nonatomic) UIViewController *parentVC;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEAwemeModel *registerElementModel;
@property (nonatomic) long long cellDisplayState;
@property (nonatomic) long long cellPageAppearState;
@property (copy, nonatomic) id /* block */ currentCellPageAppearStateBlock;
@property (nonatomic) struct EngineAudioWrapper { } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { } *videoWrapper;
@property (nonatomic) BOOL didResetForReusable;
@property (retain, nonatomic) UIView *feedTableViewCellMaskView;
@property (readonly, weak, nonatomic) id<UIScrollViewDelegate> scrollViewDelegate;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDisplay;
- (void)configWithModel:(id)a0;
- (void)removeCellChildVCForMemoryOpt;
- (void)updateContainerViewLayout;
- (void)addChildVC;
- (void)removeChildVC;
- (void)p_configWithModel:(id)a0;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)stop;
- (void)reset;
- (void)layoutSubviews;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
