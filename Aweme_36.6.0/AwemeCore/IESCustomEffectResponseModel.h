@class NSArray, NSString;

@interface IESCustomEffectResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *customEffects;
@property (copy, nonatomic) NSArray *templateEffects;
@property (copy, nonatomic) NSArray *urlPrefixs;
@property (copy, nonatomic) NSArray *customURLPrefixs;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) long long cursor;
@property (readonly, nonatomic) long long sortingPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void)updateFileURLForEffects;
- (void).cxx_destruct;

@end
