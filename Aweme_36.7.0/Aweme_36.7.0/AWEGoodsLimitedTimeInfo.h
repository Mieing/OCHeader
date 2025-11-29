@class NSString, NSNumber, NSDate;

@interface AWEGoodsLimitedTimeInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDate *serverTime;
@property (nonatomic) double initTimeinterval;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDate *currentTime;
@property (retain, nonatomic) NSDate *noticeTime;
@property (retain, nonatomic) NSDate *beginTime;
@property (retain, nonatomic) NSDate *endTime;
@property (retain, nonatomic) NSNumber *minPrice;
@property (retain, nonatomic) NSNumber *maxPrice;
@property (retain, nonatomic) NSNumber *totalStockCount;
@property (retain, nonatomic) NSNumber *leftStockCount;
@property (copy, nonatomic) NSString *cardTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_timestampJSONTransformer;
+ (id)noticeTimeJSONTransformer;
+ (id)beginTimeJSONTransformer;
+ (id)serverTimeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)endTimeJSONTransformer;

- (void).cxx_destruct;
- (id)init;

@end
