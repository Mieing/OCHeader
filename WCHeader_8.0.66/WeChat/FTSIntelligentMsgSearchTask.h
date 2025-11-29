@class NSMutableDictionary, NSString, NSArray, CContact, FTSIntelligentMsgSearchResultHandler, NSMutableArray, FTSIntelligentMsgSearchMgr;
@protocol FTSIntelligentMsgSearchTaskDelegate;

@interface FTSIntelligentMsgSearchTask : NSObject <FTSIntelligentMsgSearchMgrDelegate> {
    FTSIntelligentMsgSearchMgr *_ftsSearchMgr;
    NSMutableArray *_arrResultWrap;
    BOOL _isCancelled;
    NSString *_toParseTalker;
    NSString *_toParseRealQuery;
    NSArray *_arrSourceContact;
    CContact *_restrictSessionContact;
    CContact *_restrictTalkerContact;
    NSArray *_arrTalkerMatchContact;
    NSMutableDictionary *_dicMatchTip;
    unsigned long long _startSearchTime;
}

@property (retain, nonatomic) FTSIntelligentMsgSearchResultHandler *searchResultHandler;
@property (copy, nonatomic) NSString *taskKey;
@property (weak, nonatomic) id<FTSIntelligentMsgSearchTaskDelegate> delegate;
@property (nonatomic) int resultType;
@property (retain, nonatomic) NSString *newestQueryText;
@property (retain, nonatomic) NSString *lastQueryText;
@property (readonly, nonatomic) NSMutableArray *arrLastQueryTerm;
@property (nonatomic) BOOL hasSearchDone;
@property (nonatomic) BOOL hasFinishDBSearch;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL hasIndexMsgResult;
@property (nonatomic) BOOL hasMemMsgResult;
@property (nonatomic) unsigned int newestSearchType;
@property (retain, nonatomic) NSString *restrictSessionUsrname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSearchMgr:(id)a0;
- (void)cancel;
- (id)getSearchResult;
- (id)getMsgItem;
- (id)getSessionDic;
- (id)getSessionMsgItemsForindex:(unsigned long long)a0;
- (id)getSessionUserNameForindex:(unsigned long long)a0;
- (id)getArrSearchResultWrap;
- (unsigned int)getTotalSessionCount;
- (unsigned int)getTotalMsgItemCount;
- (id)getSessionTotalMsgItem;
- (id)getSessionArrFaceClusterItem;
- (BOOL)checkValid:(id)a0;
- (void)asynSearch:(id)a0 searchType:(unsigned int)a1;
- (void)updateResultType;
- (void)prepareRestrictSearchContent:(id)a0;
- (void)onDBSearchFinish;
- (void)searchMoreContent;
- (id)genResultWrapIn:(id)a0;
- (void)appendResult:(id)a0;
- (void).cxx_destruct;

@end
