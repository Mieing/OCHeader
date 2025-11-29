@class NSData, NSString, JsApiSourceInfo, NSNumber, StreamTabTipsInfo, FinderGetRelatedEntranceInfo, WCFinderSectionInfo, FinderShareUserInfo, WCFinderShareListReportModel, WCFinderCategoryInfo, WCFinderLocationInfo;

@interface WCFinderGetRelatedListParams : NSObject

@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) int prefetchType;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) WCFinderLocationInfo *location;
@property (nonatomic) unsigned long long tabType;
@property (nonatomic) int scene;
@property (retain, nonatomic) WCFinderSectionInfo *sectionInfo;
@property (retain, nonatomic) WCFinderCategoryInfo *categoryRecommend;
@property (retain, nonatomic) NSData *streamLastBuffer;
@property (nonatomic) int viewScene;
@property (retain, nonatomic) WCFinderShareListReportModel *cgiParams;
@property (retain, nonatomic) FinderGetRelatedEntranceInfo *relatedEntranceInfo;
@property (copy, nonatomic) NSString *gMsgId;
@property (retain, nonatomic) JsApiSourceInfo *jsApiSourceInfo;
@property (retain, nonatomic) NSString *fromSessionId;
@property (retain, nonatomic) NSString *encrytedObjectidTid;
@property (retain, nonatomic) NSNumber *pullType;
@property (retain, nonatomic) StreamTabTipsInfo *tabTipsInfo;
@property (retain, nonatomic) NSData *collectionBypassData;
@property (nonatomic) unsigned long long relatedFlag;
@property (retain, nonatomic) NSData *relatedlistLastBuffer;
@property (copy, nonatomic) NSString *shareMsgSource;
@property (copy, nonatomic) NSString *shareMsgSvrID;
@property (retain, nonatomic) FinderShareUserInfo *shareUserInfo;
@property (retain, nonatomic) NSString *lastReadFeedId;

- (id)yymodelCopy;
- (id)intoRequest;
- (id)getRoomStateWithAvgSpeed:(unsigned int)a0;
- (void)fromRequest:(id)a0;
- (void).cxx_destruct;

@end
