@class NSOrderedSet, NSString;

@interface AWEIMIntimacyManager : NSObject <AWEUserMessage, IESMIntimacyInterface>

@property (copy, nonatomic) NSOrderedSet *currentIntimacyUidsSet;
@property (copy, nonatomic) NSOrderedSet *intimacyUidsSetIncludeOneWayFriends;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)refreshIntimacyIfNeeded;
- (void)refreshIntimacyIfNeededWithCompletion:(id /* block */)a0;
- (BOOL)validateUserWithSecUid:(id)a0 inTopK:(unsigned long long)a1;
- (id)findTheMaxIntimacyChatIn:(id)a0;
- (void)p_requestMessageInfoWithMaxNum:(unsigned long long)a0 maxNumIncludeOneWayFriends:(long long)a1 completion:(id /* block */)a2;
- (void)p_shouldRefreshIntimacyOpt:(id /* block */)a0;
- (BOOL)p_shouldRefreshIntimacy;
- (BOOL)p_checkRefreshMaxNum;
- (BOOL)p_checkRefreshMaxNumInclueOneWayFriends;
- (BOOL)p_checkRefreshTimeInterval;
- (BOOL)p_checklastFetchIntimacyError;
- (BOOL)p_checkRefreshRequestCountWhenError;
- (BOOL)p_checkRefreshRequestIntervalTimeWhenError;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
