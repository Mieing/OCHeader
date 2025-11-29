@class NSString;

@interface LiteAppJsApiCallback : NSObject

@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned long long appPtr;
@property (nonatomic) unsigned long long pageId;
@property (nonatomic) unsigned int appUuid;
@property (retain, nonatomic) NSString *apiName;
@property (nonatomic) long long callbackId;
@property (nonatomic) BOOL isFromView;
@property (nonatomic) unsigned int localId;

- (id)initWithParam:(id)a0 appPtr:(unsigned long long)a1 pageId:(unsigned long long)a2 appUuid:(unsigned int)a3 apiName:(id)a4 callbackId:(long long)a5 localId:(unsigned int)a6 isFromView:(BOOL)a7;
- (void)jsApiCallback:(const void *)a0 keepAlive:(BOOL)a1;
- (void)fail:(id)a0 keepAlive:(BOOL)a1;
- (void)succes:(id)a0 keepAlive:(BOOL)a1;
- (void)fail:(id)a0;
- (void)succes:(id)a0;
- (id)getAppId;
- (unsigned long long)getAppPtr;
- (unsigned long long)getPageId;
- (unsigned int)getAppUuid;
- (void).cxx_destruct;

@end
