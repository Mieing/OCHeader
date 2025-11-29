@class NSString, AWENearbyForwardTabCouponInfoModel, AWEURLModel;

@interface AWENearbyForwardTabExtraInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *imageUrl;
@property (copy, nonatomic) NSString *pintopText;
@property (copy, nonatomic) NSString *highlightText;
@property (retain, nonatomic) AWENearbyForwardTabCouponInfoModel *couponInfo;
@property (copy, nonatomic) NSString *actionText;
@property (nonatomic) long long showTime;
@property (retain, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *closeActionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)imageUrlJSONTransformer;
+ (id)couponInfoJSONTransformer;

- (void).cxx_destruct;

@end
