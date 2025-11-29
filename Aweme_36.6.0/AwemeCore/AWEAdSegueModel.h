@class NSString, AWEAdWeChatMiniAppInfo;

@interface AWEAdSegueModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *mpUrl;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *refer;
@property (retain, nonatomic) AWEAdWeChatMiniAppInfo *wechatMpInfo;
@property (nonatomic) BOOL isFromLandingPage;
@property (copy, nonatomic) NSString *webTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)wechatMpInfoJSONTransformer;

- (void).cxx_destruct;

@end
