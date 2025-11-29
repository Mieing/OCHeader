@class NSString, FTSContactSearchTask, NSMutableArray, FTSContactDB;

@interface FTSContactSearchUtilLogic : NSObject <FTSContactSearchTaskDelegate> {
    FTSContactSearchTask *m_targetTask;
    FTSContactDB *m_ftsContactDB;
    NSString *m_currentSearchText;
    NSMutableArray *m_arrFilteredContacts;
    unsigned int m_eFTSSearchType;
}

@property (copy, nonatomic) id /* block */ m_resultBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)asynSearchFriendContact:(id)a0 resultBlock:(id /* block */)a1;
- (void)setNewestQuery:(id)a0;
- (void)resetTargetTask;
- (BOOL)fillResultWithSearchType:(unsigned long long)a0;
- (void)onContactSearchTaskFinish:(id)a0;
- (void).cxx_destruct;

@end
