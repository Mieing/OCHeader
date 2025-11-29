@class NSString, NSMutableDictionary;

@interface AWESearchAIGCCardRenderInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL firstDataFlag;
@property (nonatomic) BOOL isNotStatsTextCard;
@property (nonatomic) BOOL isAISearchLoadingCard;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *cardTypeName;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *requestId;
@property (nonatomic) long long cardRank;
@property (copy, nonatomic) NSString *searchSource;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (nonatomic) long long generationType;
@property (nonatomic) long long hitCache;
@property (copy, nonatomic) NSString *engineModelConfigName;
@property (copy, nonatomic) NSString *engineModelConfigVersion;
@property (nonatomic) long long tsGeneralSend;
@property (nonatomic) long long tsSend;
@property (nonatomic) long long tsCardReceiveLoadingData;
@property (nonatomic) long long tsCardShowLoadingTime;
@property (nonatomic) long long tsCardReceiveFirstData;
@property (nonatomic) long long tsCardReceiveLastData;
@property (nonatomic) long long tsCardCreateStart;
@property (nonatomic) long long tsCardCreateDone;
@property (nonatomic) BOOL cardIsReuse;
@property (nonatomic) long long tsCardAttachToWindowStart;
@property (nonatomic) long long tsCardRenderStart;
@property (nonatomic) long long tsCardRenderDone;
@property (nonatomic) long long tsCardRenderFirstData;
@property (nonatomic) long long tsCardReceiveFirstWord;
@property (nonatomic) long long tsCardReceiveLastWord;
@property (nonatomic) long long tsCardRenderFirstWord;
@property (nonatomic) long long tsCardRenderLastWord;
@property (nonatomic) long long tcCardRenderTime;
@property (nonatomic) long long tcCardLoadingTime;
@property (nonatomic) long long tcCardRenderTextTime;
@property (nonatomic) long long cntCardRenderTextWords;
@property (nonatomic) long long cntCardRenderOriginTextWords;
@property (nonatomic) long long cardRenderStatus;
@property (copy, nonatomic) NSString *cardRenderStatusInfo;
@property (nonatomic) long long tcCardRenderMaxStuckTime;
@property (nonatomic) long long stuckMaxDuration;
@property (nonatomic) long long stuckDuration;
@property (nonatomic) long long cntCardRenderStuckTimes;
@property (nonatomic) long long cntCardRenderTextStuckTimes;
@property (nonatomic) long long cntCardReceiveMediaCount;
@property (nonatomic) long long cntCardShowMediaCount;
@property (nonatomic) long long tsCardCanvasRenderStart;
@property (nonatomic) long long tsCardCanvasRenderDone;
@property (nonatomic) long long tsCardCanvasReceiveFirstWord;
@property (nonatomic) long long tsCardCanvasReceiveLastWord;
@property (nonatomic) long long tsCardRenderReferenceDone;
@property (nonatomic) long long tcCardReceiveTextTime;
@property (nonatomic) long long tsCardThinkEnd;
@property (nonatomic) long long tsCardContentStart;
@property (nonatomic) long long cntCardReceiveTextWords;
@property (retain, nonatomic) NSMutableDictionary *feUnMergedParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
