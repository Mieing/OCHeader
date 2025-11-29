@class NSArray, NSMutableDictionary, NSString, NSMutableArray, UIViewController;

@interface BDUGLuckyDogCommonMessageManager : NSObject <BDUGLuckyDogCommonMessageManagerProtocol, BDUGLuckyCleanCacheDelegateProtocol>

@property (copy, nonatomic) NSArray *globalBlockList;
@property (retain, nonatomic) NSMutableArray *hasShownMessageIds;
@property (retain, nonatomic) NSMutableArray *needShowMessages;
@property (nonatomic) BOOL isInBackGround;
@property (retain, nonatomic) NSMutableDictionary *reasonOfPopupErrorDic;
@property (readonly, nonatomic) UIViewController *topVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)onCleanCache;
+ (void)preStartupMessageModule;
+ (void)startupMessageModule;
+ (id)sharedInstance;
+ (id)moduleName;
+ (id)serviceProtocol;

- (void)showCommonMessageWitParams:(id)a0;
- (void)showIfNeed;
- (void)cleanupExpiredPopups;
- (void)sendTrackForDequeuedError;
- (void)settingMessageUpdate;
- (void)tryToRemoveMessageWithPopUpId:(long long)a0;
- (BOOL)hasShownPopupId:(long long)a0;
- (BOOL)shouldShowWithPopUpObj:(id)a0 messageModel:(id)a1 params:(id)a2;
- (void)showBlockPopUpObj:(id)a0 messageModel:(id)a1;
- (long long)shouldBlockPopupWithMessageModel:(id)a0 currentTimeInMS:(double)a1;
- (void)sendTrackForDequeuedMessage:(id)a0 status:(long long)a1;
- (void)requestImageWithModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)isInAllowedPositionOfModel:(id)a0;
- (void)cleanupCacheAndPopups;
- (BOOL)hasSamePopUpInShowArrayWithID:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)log:(id)a0;
- (void)didBecomeActive:(id)a0;
- (void)willResignActive:(id)a0;
- (void)dealloc;
- (BOOL)isLandscape;

@end
