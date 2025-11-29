@class NSData, RelatedTopic, PoiTopicSubTitle, FinderTopicInfo, FinderPaidCollectionInfo, BaseResponse, FinderPreloadInfo, NSMutableArray, FinderCollectionErrPage;

@interface FinderGetTopicListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned long long totalCount;
@property (retain, nonatomic) FinderTopicInfo *topic;
@property (nonatomic) unsigned int recommendSimilarFlag;
@property (retain, nonatomic) RelatedTopic *relatedTopic;
@property (retain, nonatomic) PoiTopicSubTitle *subTitle;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (nonatomic) unsigned int upContinueFlag;
@property (nonatomic) unsigned int downContinueFlag;
@property (nonatomic) unsigned int reviseFeedCount;
@property (retain, nonatomic) FinderPaidCollectionInfo *paidCollectionInfo;
@property (retain, nonatomic) FinderCollectionErrPage *collectionErrPage;

+ (void)initialize;

@end
