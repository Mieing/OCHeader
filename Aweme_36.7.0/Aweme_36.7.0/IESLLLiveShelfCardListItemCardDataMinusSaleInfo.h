@class NSString, NSNumber;

@interface IESLLLiveShelfCardListItemCardDataMinusSaleInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *minusSaleId;
@property (copy, nonatomic) NSNumber *minusSalePrice;
@property (copy, nonatomic) NSString *minusType;
@property (copy, nonatomic) NSString *minusRule;
@property (copy, nonatomic) NSNumber *allianceTaskId;
@property (copy, nonatomic) NSNumber *minusActivityId;
@property (copy, nonatomic) NSString *minusSaleTicketTag;
@property (copy, nonatomic) NSString *actualAmountTag;
@property (copy, nonatomic) NSString *leftQuantityTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
