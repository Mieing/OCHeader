@protocol AWECommentViewControllerPadAdapterProtocol, AWECommentTrackingModelProtocol, AWECommentControlVideoStateProtocol;

@interface AWECommentMediaFeedParams : NSObject

@property (nonatomic) BOOL panelIsFullScreen;
@property (nonatomic) unsigned long long exitType;
@property (copy, nonatomic) id /* block */ panelVideoHasPausedByComment;
@property (nonatomic) BOOL isReplyPageUseCommentTreeContainer;
@property (nonatomic) BOOL enableSceneSupportTimeTextExtra;
@property (weak, nonatomic) id interactionViewController;
@property (retain, nonatomic) id<AWECommentTrackingModelProtocol> commentTrackingModel;
@property (nonatomic) double panelWidthInLandscape;
@property (copy, nonatomic) id /* block */ exitLandscapeBlock;
@property (retain, nonatomic) id<AWECommentViewControllerPadAdapterProtocol> padAdapter;
@property (weak, nonatomic) id<AWECommentControlVideoStateProtocol> videoStateChangeDelegate;

- (void).cxx_destruct;

@end
