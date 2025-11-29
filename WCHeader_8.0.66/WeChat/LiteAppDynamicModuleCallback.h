@class NSString;

@interface LiteAppDynamicModuleCallback : NSObject

@property (nonatomic) unsigned int appUuid;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned long long pageId;
@property (nonatomic) long long callbackId;
@property (nonatomic) BOOL isFromView;
@property (nonatomic) unsigned int localId;

- (id)initWithParam:(unsigned int)a0 appId:(id)a1 pageId:(unsigned long long)a2 callbackId:(long long)a3 localId:(unsigned int)a4 isFromView:(BOOL)a5;
- (void)callback:(id)a0 keepAlive:(BOOL)a1;
- (void)callbackError:(id)a0 keepAlive:(BOOL)a1;
- (void)callbackImpl:(id)a0 keepAlive:(BOOL)a1 error:(BOOL)a2;
- (unsigned int)getAppUuId;
- (id)getAppId;
- (unsigned long long)getPageId;
- (long long)getCallbackId;
- (unsigned int)getLocalId;
- (void).cxx_destruct;

@end
