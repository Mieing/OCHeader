@class NSString, NSNumber;

@interface IESECGoodsSeckillModel : MTLModel <IESECGoodsPriceLabelModel, MTLJSONSerializing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double noticeTime;
@property (nonatomic) double beginTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (copy, nonatomic) NSString *cardTitle;
@property (retain, nonatomic) NSNumber *marketPrice;
@property (readonly, nonatomic) double currentTime;
@property (copy, nonatomic) NSString *activityID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)minPrice;
- (id)maxPrice;
- (BOOL)hasGapPrice;
- (id)price;
- (void).cxx_destruct;
- (id)init;

@end
