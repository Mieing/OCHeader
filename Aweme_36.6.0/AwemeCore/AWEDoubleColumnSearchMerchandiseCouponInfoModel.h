@class AWEDoubleColumnSearchMerchandiseCouponInfoCountdownModel, NSString, AWEDoubleColumnSearchMerchandiseActivityIcon, NSArray, AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel;

@interface AWEDoubleColumnSearchMerchandiseCouponInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoCountdownModel *countdown;
@property (copy, nonatomic) NSString *background;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseActivityIcon *headIcon;
@property (copy, nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel *headText;
@property (retain, nonatomic) NSArray *contentText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)countdownJSONTransformer;
+ (id)headIconJSONTransformer;
+ (id)contentTextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
