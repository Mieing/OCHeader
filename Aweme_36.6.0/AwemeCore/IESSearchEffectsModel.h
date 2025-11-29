@class NSString, NSArray;

@interface IESSearchEffectsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *searchTips;
@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) long long cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isUseHot;
@property (retain, nonatomic) NSArray *effects;
@property (retain, nonatomic) NSArray *collection;
@property (retain, nonatomic) NSArray *bindEffects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;
- (void)updateEffects;

@end
