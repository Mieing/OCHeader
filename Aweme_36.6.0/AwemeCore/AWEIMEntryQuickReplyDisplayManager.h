@class NSString, NSMutableDictionary;

@interface AWEIMEntryQuickReplyDisplayManager : NSObject <AWEUserMessage>

@property (nonatomic) long long dismissCount;
@property (retain, nonatomic) NSMutableDictionary *hotFeedCountInfos;
@property (retain, nonatomic) NSMutableDictionary *familiarCountInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasRepliedWithAwemeModel:(id)a0;
+ (void)markRepliedWithAwemeModel:(id)a0;
+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (void)markQuickReplyShowWithAweme:(id)a0 containerType:(long long)a1;
- (void)markAwemeModelWillShow:(id)a0 containerType:(long long)a1;
- (void)markFeedWillRefreshWithContainerType:(long long)a0;
- (BOOL)needImmediatelyShowQuickReplyWithAweme:(id)a0 inContainer:(long long)a1;
- (BOOL)checkMainThread;
- (id)countInfosWithContainerType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
