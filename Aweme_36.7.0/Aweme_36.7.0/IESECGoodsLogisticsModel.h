@class NSArray, NSString, IESECURLModel, IESECGoodsLogisticsAddressModel, NSNumber;

@interface IESECGoodsLogisticsModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *logisticLines;
@property (nonatomic) long long postFee;
@property (copy, nonatomic) NSArray *logisticText;
@property (copy, nonatomic) NSString *deliveryDelayDesc;
@property (copy, nonatomic) NSString *presellDelayDesc;
@property (copy, nonatomic) NSNumber *fastDispatch;
@property (retain, nonatomic) IESECGoodsLogisticsAddressModel *destAddr;
@property (nonatomic) unsigned long long arriveTime;
@property (retain, nonatomic) IESECURLModel *arriveIcon;
@property (retain, nonatomic) IESECURLModel *prefixIcon;
@property (copy, nonatomic) NSString *extraLog;
@property (retain, nonatomic) NSString *middleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logisticLinesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
