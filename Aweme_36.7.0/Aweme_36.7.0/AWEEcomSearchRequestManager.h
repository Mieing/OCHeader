@interface AWEEcomSearchRequestManager : NSObject

+ (id)liveGoodsSearchPath;
+ (id)middlePageHotSpotRankURLPath;
+ (id)realTimePushSearchURLPath;
+ (id)resultPageCoinTask;
+ (id)submitResultPageCoinTaskResult;
+ (id)scanGoodsConfigURLPath;
+ (id)ecomSearchShowDocsPath;
+ (id)schemaValidationURLPath;
+ (id)generalRealTimePushURLPath;
+ (id)middlePageBffURLPath;
+ (id)middlePageNewerURLPath;
+ (id)shopSearchAggregateShoppingV3UrlPath;
+ (id)shopSearchAggregateShoppingChunkV3UrlPath;
+ (id)shopSearchAggregateShoppingByImageChunkUrlPath;
+ (id)ecomSearchSliceSugUrlPath;
+ (id)aiSearchChunkUrlPath;
+ (id)aiSearchUrlPath;
+ (id)shareInstance;

- (id)searchPrivacyState;
- (id)searchPublicParams;

@end
