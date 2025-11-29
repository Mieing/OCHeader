@class NSDictionary, NSString, AWEShareSpecifiedPlatformSDKSetting;

@interface AWESharePlatformSDKSetting : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEShareSpecifiedPlatformSDKSetting *qqShareSDK;
@property (retain, nonatomic) AWEShareSpecifiedPlatformSDKSetting *wechatShareSDK;
@property (retain, nonatomic) AWEShareSpecifiedPlatformSDKSetting *weiboShareSDK;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)qqShareSDKJSONTransformer;
+ (id)wechatShareSDKJSONTransformer;
+ (id)weiboShareSDKJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
