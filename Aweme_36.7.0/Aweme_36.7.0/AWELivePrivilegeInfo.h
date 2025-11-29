@class NSString, AWELivePaidLiveConfig, AWELivePaidLiveUIBaseConfig, AWELivePrivilegeBaseInfo, AWELivePrivilegeUrl;

@interface AWELivePrivilegeInfo : AWEBaseApiModel

@property (nonatomic) long long entityId;
@property (nonatomic) unsigned long long paidLiveType;
@property (retain, nonatomic) AWELivePrivilegeBaseInfo *paidLiveInfo;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) AWELivePrivilegeUrl *privilegeURL;
@property (retain, nonatomic) AWELivePaidLiveUIBaseConfig *uiConfig;
@property (retain, nonatomic) AWELivePaidLiveConfig *entityConfig;

+ (id)uiConfigJSONTransformer;
+ (id)paidLiveInfoJSONTransformer;
+ (id)privilegeURLJSONTransformer;
+ (id)entityConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
