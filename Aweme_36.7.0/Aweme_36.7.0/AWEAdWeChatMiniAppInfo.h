@class NSString, NSNumber;

@interface AWEAdWeChatMiniAppInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *advID;
@property (copy, nonatomic) NSString *siteID;
@property (copy, nonatomic) NSString *wechatMiniAppSdk;
@property (copy, nonatomic) NSString *wechatMiniAppLink;
@property (retain, nonatomic) NSNumber *wechatSkipType;
@property (retain, nonatomic) NSNumber *wechatOpenMethod;
@property (retain, nonatomic) NSNumber *wechatAppType;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL isOpenWechatMiniAppFailed;
@property (retain, nonatomic) NSNumber *openErrorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
