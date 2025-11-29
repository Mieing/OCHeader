@class FinderPreloadInfo, NSData, FinderRelatedRecommendTips, NSMutableArray, BaseResponse;

@interface FinderEnhanceResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (retain, nonatomic) FinderRelatedRecommendTips *relatedRecommendTips;

+ (void)initialize;

@end
