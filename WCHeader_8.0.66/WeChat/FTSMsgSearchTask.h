@class FTSMsgSearchMgr, NSString, NSArray, SearchMatchTip, NSMutableDictionary, FTSMsgSearchResultHandler, NSMutableArray, CContact;
@protocol FTSMsgSearchTaskDelegate;

@interface FTSMsgSearchTask : NSObject <FTSMsgSearchMgrDelegate> {
    FTSMsgSearchMgr *_ftsSearchMgr;
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

@property (retain, nonatomic) FTSMsgSearchResultHandler *searchResultHandler;
@property (copy, nonatomic) NSString *taskKey;
@property (weak, nonatomic) id<FTSMsgSearchTaskDelegate> delegate;
@property (nonatomic) unsigned long long resultType;
@property (retain, nonatomic) NSString *newestQueryText;
@property (retain, nonatomic) NSString *lastQueryText;
@property (readonly, nonatomic) NSMutableArray *arrLastQueryTerm;
@property (nonatomic) BOOL hasSearchDone;
@property (nonatomic) BOOL hasFinishDBSearch;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL hasIndexMsgResult;
@property (nonatomic) BOOL hasMemMsgResult;
@property (retain, nonatomic) NSString *parsedTalkerFromQuery;
@property (retain, nonatomic) NSString *parsedQueryFromQuery;
@property (nonatomic) BOOL isSessionRestrictFirst;
@property (retain, nonatomic) NSString *restrictSessionUsrname;
@property (retain, nonatomic) NSString *restrictTalkerUsrname;
@property (retain, nonatomic) NSString *restrictTalkerSearchText;
@property (retain, nonatomic) NSString *restrictContextRealSearchText;
@property (retain, nonatomic) SearchMatchTip *restrictTalkerMatchTip;
@property (nonatomic) BOOL isFirstSearch;
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
- (unsigned long long)convertPageType;
- (int)getMsgSearchOneBatchCount;
- (BOOL)checkValid:(id)a0;
- (void)asynSearch:(id)a0;
- (void)updateResultType;
- (void)prepareRestrictSearchContent:(id)a0;
- (void)onDBSearchFinish;
- (void)searchMoreContent;
- (void)searchContactIfNeed;
- (id)genResultWrapIn:(id)a0;
- (void)appendResult:(id)a0;
- (id)classifyMsgItems:(id)a0;
- (void).cxx_destruct;

@end
