@class NSString, AWEURLModel;

@interface AWEBoostInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *result;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
