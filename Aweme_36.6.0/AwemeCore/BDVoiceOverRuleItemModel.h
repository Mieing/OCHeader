@class NSString, NSArray;

@interface BDVoiceOverRuleItemModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *focus;
@property (copy, nonatomic) NSString *traits;
@property (copy, nonatomic) NSString *container;
@property (copy, nonatomic) NSString *isModalStyle;
@property (copy, nonatomic) NSArray *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)nextPathConfig;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
