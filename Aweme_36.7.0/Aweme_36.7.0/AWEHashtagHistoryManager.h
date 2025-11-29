@class NSArray, NSString;

@interface AWEHashtagHistoryManager : NSObject <AWEHashtagHistoryManager, AWEUserMessage>

@property (retain, nonatomic) NSArray *savedHashtags;
@property (retain, nonatomic) NSArray *savedPrivateHashtags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)savedPrivateHashtags;
+ (id)savedHashtags;
+ (void)saveHashtags:(id)a0;
+ (void)saveHashtags:(id)a0 isPrivate:(BOOL)a1;
+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)p_discardOldUserHistoryIfNeeded;
- (void)saveHashtags:(id)a0;
- (void)saveHashtags:(id)a0 isPrivate:(BOOL)a1;
- (id)getStorageDataWithKey:(id)a0 isPrivate:(BOOL)a1;
- (void)saveHashtags:(id)a0 isPrivate:(BOOL)a1 withStorageKey:(id)a2;
- (BOOL)checkHashtagIfSaved:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
