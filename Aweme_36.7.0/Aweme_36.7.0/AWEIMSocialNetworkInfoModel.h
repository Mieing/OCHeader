@class NSArray, NSString;

@interface AWEIMSocialNetworkInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *recommendUserIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)primaryKey;
- (id)initWithUidString:(id)a0;

@end
