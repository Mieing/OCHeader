@class NSData, FinderLiveStreamGetAsyncLoadInfoConfig, FinderLiveSquareStyleInfo, FinderStreamLayoutInfo, BaseResponse, FinderJumpLiveTab, NSMutableArray, FinderLiveCardHighlightTagInfoBundle, FinderLivePreloadInfo;

@interface FinderLbsLiveStreamResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) FinderLivePreloadInfo *livePreloadInfo;
@property (retain, nonatomic) FinderStreamLayoutInfo *layoutInfo;
@property (retain, nonatomic) FinderJumpLiveTab *jumpLiveTab;
@property (nonatomic) unsigned int prefechMinInterval;
@property (retain, nonatomic) NSData *debugMessage;
@property (nonatomic) unsigned int refreshInterval;
@property (nonatomic) BOOL skipFeedsReport;
@property (retain, nonatomic) FinderLiveSquareStyleInfo *styleInfo;
@property (retain, nonatomic) FinderLiveCardHighlightTagInfoBundle *liveCardHighlightTag;
@property (retain, nonatomic) FinderLiveStreamGetAsyncLoadInfoConfig *asyncLoadInfoConfig;
@property (nonatomic) unsigned int liveCardAutoPlayFlag;

+ (void)initialize;

@end
