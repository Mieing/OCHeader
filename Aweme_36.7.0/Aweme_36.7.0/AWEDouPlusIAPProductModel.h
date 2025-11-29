@class NSString;

@interface AWEDouPlusIAPProductModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iapID;
@property (nonatomic) long long payAmount;
@property (nonatomic) long long payAmountInt;
@property (nonatomic) long long budget;
@property (nonatomic) long long budgetInt;
@property (nonatomic) BOOL isSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)payAmountString;
- (void).cxx_destruct;

@end
