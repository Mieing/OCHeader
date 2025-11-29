@class NSString, AWEFormatLiveContainerController, AWEAwemeModel, UIView, UIViewController;
@protocol UIScrollViewDelegate;

@interface AWEFormatLiveFeedCell : UITableViewCell <AWEFeedTableViewCellProtocol>

@property (retain, nonatomic) AWEFormatLiveContainerController *viewController;
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

- (void)preloadWithModel:(id)a0;
- (void)configWithModel:(id)a0;
- (void)removeCellChildVCForMemoryOpt;
- (void)p_removeChildVC;
- (void)p_addChildVC;
- (void)_registerFontIfNeed;
- (BOOL)_isFontRegisted;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)stop;
- (void)reset;
- (void)configureWithModel:(id)a0;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
