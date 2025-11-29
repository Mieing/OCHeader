@class NSNumber, NSString;
@protocol AWEAwemePlayInteractionPanelDelegate, AWEPlayInteractionViewControllerProtocol, AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AWEFeedViewedViewBarContext : NSObject <AWEFeedViewedViewBarContextProtocol>

@property (readonly, nonatomic) id<AWEAwemePlayInteractionPanelDelegate> interactionPanelController;
@property (retain, nonatomic) id<AWEAwemeDetailBottomBarCommonContextProtocol> commonCtx;
@property (copy, nonatomic) id /* block */ pureModeBlock;
@property (copy, nonatomic) id /* block */ getInteractionControllerBlock;
@property (copy, nonatomic) id /* block */ isRepostAwemeBlock;
@property (copy, nonatomic) id /* block */ isDraggingBlock;
@property (retain, nonatomic) NSNumber *source;
@property (copy, nonatomic) id /* block */ insertViewIDsForAwemeID;
@property (copy, nonatomic) id /* block */ shouldPreventRefreshBlock;
@property (readonly, nonatomic) id<AWEPlayInteractionViewControllerProtocol> interactionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)doBottomViewedAction:(long long)a0;
- (BOOL)shouldInsertViewer;
- (void).cxx_destruct;

@end
