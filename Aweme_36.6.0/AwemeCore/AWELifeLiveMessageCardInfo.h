@class NSString, AWELifeShelfCardListItemCardData;

@interface AWELifeLiveMessageCardInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) AWELifeShelfCardListItemCardData *cardData;
@property (copy, nonatomic) NSString *cardId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
