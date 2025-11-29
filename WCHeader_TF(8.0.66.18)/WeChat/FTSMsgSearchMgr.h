@class NSMutableDictionary, FTSMessageDB;

@interface FTSMsgSearchMgr : NSObject {
    NSMutableDictionary *m_searchHandler;
    NSMutableDictionary *m_searchResult;
    NSMutableDictionary *m_searchStatus;
}

@property (retain, nonatomic) FTSMessageDB *ftsDB;
@property (nonatomic) BOOL bIsIgnoreCluster;

+ (id)ClusterUsernames;

- (id)initWithDB:(id)a0;
- (id)startSearch:(id)a0 limitUsername:(id)a1 searchFinishTarget:(id)a2;
- (void)internalStartSearch:(id)a0 limitUsername:(id)a1;
- (id)memSearch:(id)a0 queryText:(id)a1 limitUsername:(id)a2;
- (id)getSearchKeyWithQuery:(id)a0 limitSession:(id)a1;
- (void)callSearchFinish:(id)a0;
- (void)cancelSearch:(id)a0 withHandlerKey:(id)a1;
- (BOOL)isFavWeAppMsgWithUsername:(id)a0;
- (BOOL)isClusterId:(id)a0;
- (BOOL)isSessionId:(id)a0 belongsToClusterId:(id)a1;
- (id)getClusterIdFor:(id)a0;
- (void).cxx_destruct;

@end
