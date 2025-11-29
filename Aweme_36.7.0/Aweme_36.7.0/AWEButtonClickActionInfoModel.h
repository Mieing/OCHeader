@class NSString, NSArray;

@interface AWEButtonClickActionInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long clickAction;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSArray *btnDataKeys;
@property (nonatomic) long long behaviorType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
