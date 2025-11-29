@class NSString, AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel;

@interface AWEDoubleColumnSearchMerchandiseCouponInfoCountdownModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *countdownTextColor;
@property (copy, nonatomic) NSString *countdownBackgroundColor;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel *headText;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel *tailText;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel *countdownEndText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)headTextJSONTransformer;
+ (id)tailTextJSONTransformer;
+ (id)countdownEndTextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
