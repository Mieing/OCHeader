@class NSString, NSDictionary;

@interface AWELiveShelfModel : NSObject

@property (copy, nonatomic) NSString *aggCardId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *sourceType;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *pageSource;
@property (copy, nonatomic) NSString *couponIds;
@property (copy, nonatomic) NSString *anchorProductId;
@property (copy, nonatomic) NSString *fromPosition;
@property (copy, nonatomic) NSString *roomUniqueKey;
@property (copy, nonatomic) NSDictionary *extraRequestPara;
@property (copy, nonatomic) NSString *envAddressInfo;
@property (copy, nonatomic) NSDictionary *envRoomLevelParams;
@property (copy, nonatomic) NSString *selectedTabIdStr;
@property (nonatomic) double openShelfTimeStamp;
@property (nonatomic) BOOL isOpenGoodsDetail;
@property (nonatomic) double goodsDetailCloseTimeStamp;
@property (nonatomic) long long pageType;
@property (nonatomic) long long openType;
@property (copy, nonatomic) id /* block */ envRequestParams;

- (id)extraRequestParamsCollect;
- (void).cxx_destruct;

@end
