@class NSString, NSMutableArray;
@protocol AWEPlayInteractionViewControllerProtocol, AWEPlayInteractionCommentPanelControllerProtocol;

@interface AWEPlayInteractionCommentLynxMediaControlManager : NSObject

@property (retain, nonatomic) NSMutableArray *subscriberArray;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol> container;
@property (weak, nonatomic) id<AWEPlayInteractionCommentPanelControllerProtocol> commentPanelControllerDelegate;
@property (copy, nonatomic) NSString *mediaControlLynxPageID;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)unbindEvent;
- (void)bindEvent;
- (void).cxx_destruct;
- (id)registerEvent:(id)a0 callback:(id /* block */)a1;
- (void)dealloc;

@end
