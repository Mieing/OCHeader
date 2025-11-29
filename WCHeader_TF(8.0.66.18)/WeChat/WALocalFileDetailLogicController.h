@class ForwardMessageLogicController, UIViewController, NSString;

@interface WALocalFileDetailLogicController : MMLocalFileDetailLogicController <ForwardMessageLogicDelegate, IWAFileLogicController> {
    BOOL b_forbidOperation;
    BOOL b_enableJS;
}

@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (weak, nonatomic) UIViewController *fileViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)forbidOperation;
- (BOOL)isMinimizeEnable;
- (BOOL)canAddToFavorites;
- (void)onForwardToContact:(id)a0;
- (id)generateFavoriteItem;
- (id)GetMsg;
- (void)customizeActionSheetInFirstRow:(id)a0 secondRow:(id)a1;
- (void)setForbidOperation:(BOOL)a0;
- (void)setEnableJS:(BOOL)a0;
- (void)openFileInNavVC:(id)a0;
- (id)getCurrentViewController;
- (void).cxx_destruct;

@end
