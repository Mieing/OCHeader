@class NSString, NSMutableArray;

@interface AWEASMusicHistorySuggestionManager : NSObject <ACCUserServiceMessage>

@property (copy, nonatomic) NSString *suggestionKey;
@property (retain, nonatomic) NSMutableArray *dataList;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogout;
- (void)p_discardOldUserHistoryIfNeeded;
- (id)p_uidSuggestionKey;
- (void)p_updateData;
- (id)p_suggestionKeyForUid:(id)a0;
- (void)removeAllQueries;
- (void)fetchHistorySuggestionWithCompletion:(id /* block */)a0;
- (void)save:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuggestionType:(unsigned long long)a0;
- (void)dealloc;
- (void)removeQuery:(id)a0;

@end
