@class NSString, NSNumber;

@interface IESECGoodsSoldOutModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *promotionID;
@property (copy, nonatomic) NSString *msgTemplate;
@property (retain, nonatomic) NSNumber *nextTickTime;
@property (retain, nonatomic) NSNumber *nextReleaseTickTime;
@property (retain, nonatomic) NSNumber *countDownMin;
@property (retain, nonatomic) NSNumber *hasStock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
