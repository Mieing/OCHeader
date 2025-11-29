@class NSString;

@interface LiteAppJsApiEmoticonPackButtonDesc : LiteAppJsApi <EmoticonButtonDescExt>

@property (retain, nonatomic) NSString *pid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;
- (void)onGetEmoticonDownloadFlag:(unsigned int)a0 andButtonDesc:(id)a1;
- (void).cxx_destruct;

@end
