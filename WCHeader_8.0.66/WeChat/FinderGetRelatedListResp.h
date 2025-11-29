@class FinderPreloadInfo, FinderStreamLongVideoInfo, BaseResponse, NSMutableArray, GetRelatedListPrefetchConfig, FinderRelatedRecommendTips, FinderStreamLayoutInfo, NSString, FinderLivePreloadInfo, StreamExtContext, NSData, StreamBackupInfo, FinderBarInfo;

@interface FinderGetRelatedListResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *streamLastBuffer;
@property (retain, nonatomic) FinderPreloadInfo *preloadInfo;
@property (retain, nonatomic) NSString *relatedStreamWording;
@property (retain, nonatomic) NSMutableArray *card;
@property (retain, nonatomic) NSMutableArray *txtCard;
@property (retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo;
@property (retain, nonatomic) FinderStreamLayoutInfo *layoutInfo;
@property (retain, nonatomic) FinderBarInfo *barInfo;
@property (retain, nonatomic) NSString *briefCardNextWording;
@property (retain, nonatomic) FinderStreamLongVideoInfo *longVideoInfo;
@property (retain, nonatomic) GetRelatedListPrefetchConfig *prefetchConfig;
@property (retain, nonatomic) NSString *fromSessionId;
@property (retain, nonatomic) NSData *debugMessage;
@property (retain, nonatomic) FinderRelatedRecommendTips *relatedRecommendTips;
@property (retain, nonatomic) NSMutableArray *jumpObject;
@property (retain, nonatomic) NSData *asyncLoadInfoBuffer;
@property (nonatomic) unsigned int mergeType;
@property (retain, nonatomic) StreamBackupInfo *backupInfo;
@property (retain, nonatomic) StreamExtContext *streamExtContext;

+ (void)initialize;

@end
