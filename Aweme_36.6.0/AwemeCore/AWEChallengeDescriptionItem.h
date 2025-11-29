@class NSString, AWEChallengWechatMiniAppInfo, AWEChallengeDownloadComponent;

@interface AWEChallengeDescriptionItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWEChallengeDownloadComponent *downloadComponent;
@property (retain, nonatomic) AWEChallengWechatMiniAppInfo *wechatMiniApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloadComponentJSONTransformer;
+ (id)wechatMiniAppJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
