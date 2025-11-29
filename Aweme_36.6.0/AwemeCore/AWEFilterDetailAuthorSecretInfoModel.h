@class NSString, AWEUserModel;

@interface AWEFilterDetailAuthorSecretInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEUserModel *authorInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authorInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
