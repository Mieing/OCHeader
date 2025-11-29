@class NSString;

@interface LiteAppJsApiEmoticonUsePackInChat : LiteAppJsApi <SessionSelectControllerDelegate>

@property (retain, nonatomic) NSString *pid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)endWithOK;
- (void)OnSelectSession:(id)a0 SessionSelectController:(id)a1;
- (void)OnSelectSessionCancel:(id)a0;
- (id)getViewController;
- (BOOL)checkMsgControllerFrom:(id)a0;
- (void).cxx_destruct;

@end
