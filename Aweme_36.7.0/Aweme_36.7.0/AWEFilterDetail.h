@class NSString, AWEFilterDetailAuthorSecretInfoModel;

@interface AWEFilterDetail : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *filterReason;
@property (copy, nonatomic) NSString *notice;
@property (copy, nonatomic) NSString *detailMsg;
@property (copy, nonatomic) NSString *icon;
@property (retain, nonatomic) AWEFilterDetailAuthorSecretInfoModel *authorSecretInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)authorSecretInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
