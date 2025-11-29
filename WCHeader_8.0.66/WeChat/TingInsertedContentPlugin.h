@class NSString, UIViewController;

@interface TingInsertedContentPlugin : NSObject <MMFlutterPlugin, TingInsertedContentApi>

@property (weak, nonatomic) UIViewController *currentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void)showFinderProfileDialogUserName:(id)a0 percentHeight:(double)a1 listenItemData:(id)a2 tabType:(long long)a3 requestScene:(long long)a4 extraInfo:(id)a5 followScene:(long long)a6 completion:(id /* block */)a7;
- (void)showBizProfileDialogUserName:(id)a0 percentHeight:(id)a1 completion:(id /* block */)a2;
- (void)showBizProfileDialogUserName:(id)a0 percentHeight:(double)a1 listenItemData:(id)a2 scene:(long long)a3 sceneNote:(id)a4 completion:(id /* block */)a5;
- (void)closeProfileDialogWithError:(id *)a0;
- (void).cxx_destruct;

@end
