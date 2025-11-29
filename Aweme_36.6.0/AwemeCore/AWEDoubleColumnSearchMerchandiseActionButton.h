@class NSString, AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel, AWEURLModel;

@interface AWEDoubleColumnSearchMerchandiseActionButton : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *actionIcon;
@property (retain, nonatomic) AWEDoubleColumnSearchMerchandiseCouponInfoContentTextModel *actionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionTextJSONTransformer;
+ (id)actionIconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
