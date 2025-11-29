@class NSArray, NSString;

@interface AWEProfileCardEntriesInfoV3Model : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *cardsDefaultOrder;
@property (copy, nonatomic) NSArray *displayCardIdList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardsDefaultOrderJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
