@class NSString, FinderWindowProductInfo, FinderBulkBuyInfo;

@interface FinderLiveGetProductPromoteReplayWidgetResp : WXPBGeneratedMessage

@property (nonatomic) BOOL hasReplay;
@property (retain, nonatomic) NSString *videoUrl;
@property (retain, nonatomic) NSString *videoImgUrl;
@property (retain, nonatomic) FinderWindowProductInfo *productInfo;
@property (retain, nonatomic) FinderBulkBuyInfo *bulkBuyInfo;

+ (void)initialize;

@end
