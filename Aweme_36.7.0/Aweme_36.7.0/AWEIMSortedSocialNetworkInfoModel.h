@class NSArray, NSString;

@interface AWEIMSortedSocialNetworkInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *socialNetworkInfos;
@property (nonatomic) BOOL needUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)socialNetworkInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
