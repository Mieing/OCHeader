@class NSString;

@interface AWEAdManager : HTSService <AWEAdManager, AWEOpenURLMessage>

@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL hasOpenOtherAppInTask;
@property (retain, nonatomic) NSString *linkAdStashedData;
@property (copy, nonatomic) NSString *lastClickCid;
@property (copy, nonatomic) NSString *lastClickLogExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setUpAuthorTagIfNeededForComment:(id)a0;
+ (BOOL)isOtherAppSchema:(id)a0;
+ (void)setupCommentTag:(id)a0;

- (void)onServiceInit;
- (void)onAppDidEnterBackground:(id)a0;
- (void)storeLastClickedAdInfoWithCid:(id)a0 logExtra:(id)a1;
- (id)getLastClickedAdInfoWithCid:(id)a0;
- (void)didOpenURL:(id)a0 sourceApplication:(id)a1 annotation:(id)a2;
- (void)setupExtraObserver;
- (void)handleApplicationDidBecomeActiveNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
