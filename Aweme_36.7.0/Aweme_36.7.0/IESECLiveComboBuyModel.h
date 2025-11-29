@class NSString, NSArray, IESECLiveComboBuyCardStyleModel, NSNumber;

@interface IESECLiveComboBuyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *combinationID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *comboBuyGoodsArray;
@property (copy, nonatomic) NSString *benefitText;
@property (copy, nonatomic) NSString *jumpURL;
@property (nonatomic) BOOL isExplaining;
@property (nonatomic) BOOL isBound;
@property (copy, nonatomic) NSNumber *originMaxPrice;
@property (copy, nonatomic) NSNumber *originMinPrice;
@property (copy, nonatomic) NSNumber *comboMaxPrice;
@property (copy, nonatomic) NSNumber *comboMinPrice;
@property (retain, nonatomic) IESECLiveComboBuyCardStyleModel *cardStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)comboBuyGoodsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
