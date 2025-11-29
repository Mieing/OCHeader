@class NSString, EmoticonCustomAddLogicController;

@interface LiteAppJsApiEmoticonOpenSelfie : LiteAppJsApi <MMUIViewControllerDelegate, EmoticonCustomAddLogicControllerDelegate>

@property (retain, nonatomic) EmoticonCustomAddLogicController *emoticonAddLogicController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)endWithOK;
- (id)errMsgWith:(id)a0;
- (id)getViewController;
- (void)onTakePhotoCancelled;
- (void)onAddCustomEmoticonPendingUploadWithWrap:(id)a0;
- (void)onAddEmoticonFinishedWithWrap:(id)a0 isSucceeded:(BOOL)a1;
- (void)onAddEmoticonDetectIfDismissViewController:(id)a0;
- (void).cxx_destruct;

@end
