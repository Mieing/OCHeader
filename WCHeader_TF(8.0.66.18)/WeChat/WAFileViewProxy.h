@class ForwardMessageLogicController, UIViewController, NSString;

@interface WAFileViewProxy : NSObject <ForwardMessageLogicDelegate, IWAFileViewService>

@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (weak, nonatomic) UIViewController *fileViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateFileLogicControllerWithPath:(id)a0;

- (void)forwardMessageWithPath:(id)a0;
- (void)addToFavoritesWithPath:(id)a0;
- (void)setCurrentViewController:(id)a0;
- (id)getCurrentViewController;
- (void).cxx_destruct;

@end
