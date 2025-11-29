@class AWEURLModel, NSArray, NSString, NSDictionary, AWEDoubleColumnSearchMerchandiseActionButton, AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel;

@interface AWEDoubleColumnSearchMerchandiseIndustryCouponModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *headIcon;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel *headText;
@property (retain, nonatomic) NSArray *contentText;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseActionButton *actionButton;
@property (copy, nonatomic) NSString *background;
@property (copy, nonatomic) NSString *dataID;
@property (copy, nonatomic) NSDictionary *rebackParams;
@property (copy, nonatomic) NSString *endTime;
@property (copy, nonatomic) NSString *couponType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)headIconJSONTransformer;
+ (id)contentTextJSONTransformer;
+ (id)actionButtonJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
