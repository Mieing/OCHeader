@class NSString, NSMutableArray, FinderObjectUidUnit;

@interface FinderLiveStreamGetAsyncLoadInfoResult : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *sceneResult;
@property (retain, nonatomic) FinderObjectUidUnit *objectUid;
@property (retain, nonatomic) NSString *liveAggregationCardId;
@property (nonatomic) unsigned int liveSquareInteractionEntryType;

+ (void)initialize;

@end
