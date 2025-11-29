@class NSString;

@interface WCFinderGoodsInfo : NSObject

@property (copy, nonatomic) NSString *goodsProductID;
@property (copy, nonatomic) NSString *goodsActivityId;
@property (copy, nonatomic) NSString *goodsTitle;
@property (copy, nonatomic) NSString *goodsMiniAppId;
@property (copy, nonatomic) NSString *goodsMiniAppPath;
@property (nonatomic) BOOL jumpIsFullPage;
@property (copy, nonatomic) NSString *jumpIconUrl;
@property (nonatomic) int jumpBusinessType;
@property (copy, nonatomic) NSString *jumpExtInfo;

+ (id)goodsInfoFromDict:(id)a0 productId:(id)a1 activityId:(id)a2;
+ (id)goodsInfoWithMiniAppCompleteParams:(id)a0;

- (id)goodsMiniFetchInfoId;
- (void).cxx_destruct;

@end
