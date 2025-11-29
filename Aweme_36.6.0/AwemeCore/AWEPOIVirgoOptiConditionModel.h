@class NSString;
@protocol AWEPOIVirgoOptiConditionOperator;

@interface AWEPOIVirgoOptiConditionModel : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *op;
@property (copy, nonatomic) NSString *alias;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id<AWEPOIVirgoOptiConditionOperator> conditionOperator;
@property (readonly, nonatomic) BOOL isValidCondition;

- (void).cxx_destruct;
- (id)initWithCondition:(id)a0;

@end
