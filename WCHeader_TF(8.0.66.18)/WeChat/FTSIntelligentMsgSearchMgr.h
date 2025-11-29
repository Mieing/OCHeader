@class NSMutableDictionary, FTSIntelligentMessageDB;

@interface FTSIntelligentMsgSearchMgr : NSObject {
    NSMutableDictionary *m_searchHandler;
    NSMutableDictionary *m_searchResult;
    NSMutableDictionary *m_searchStatus;
}

@property (retain, nonatomic) FTSIntelligentMessageDB *ftsDB;

- (id)initWithDB:(id)a0;
- (id)startSearch:(id)a0 limitUsername:(id)a1 searchType:(unsigned int)a2 searchFinishTarget:(id)a3;
- (void)internalStartSearch:(id)a0 limitUsername:(id)a1 searchType:(unsigned int)a2;
- (id)memSearch:(id)a0 queryText:(id)a1 limitUsername:(id)a2;
- (id)getAllSearchQueryText:(id)a0 limitUsername:(id)a1 searchType:(unsigned int)a2;
- (id)getSearchKeyWithQuery:(id)a0 limitSession:(id)a1 searchType:(unsigned int)a2;
- (void)callSearchFinish:(id)a0;
- (void)cancelSearch:(id)a0 withHandlerKey:(id)a1;
- (void).cxx_destruct;

@end
