@class NSString, AWEAwemeModel, UIView, UIViewController;
@protocol UIScrollViewDelegate, AWEFeedTableViewCellViewControllerProtocol;

@interface AWEFollowFeedRecommendCardTableViewCell : UITableViewCell <AWEFeedTableViewCellProtocol>

@property (retain, nonatomic) UIViewController<AWEFeedTableViewCellViewControllerProtocol> *viewController;
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

- (void)configWithModel:(id)a0;
- (void)removeCellChildVCForMemoryOpt;
- (void)_removeChildVC;
- (void)_addChildVC;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)stop;
- (void)reset;
- (void)dealloc;
- (void)configureWithModel:(id)a0;

@end
