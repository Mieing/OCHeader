@class NSString, AWELocalUserDatabaseManager;
@protocol IESLCMessageHandlerProtocol;

@interface AWEFansSearchManager : NSObject <AWEUserMessage, IESLCMessageHandlerService, AWEFansSearchManagerProtocol>

@property (retain, nonatomic) AWELocalUserDatabaseManager *databaseManager;
@property (nonatomic) BOOL requestFansDateFailed;
@property (nonatomic) BOOL isRequestingDataOnAir;
@property (nonatomic) BOOL needFetchFansDataAfterEnterPersonalProfile;
@property (nonatomic) BOOL needFetchFansDataAfterEnterForground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IESLCMessageHandlerProtocol> messageHandler;

+ (BOOL)enableFansSearch;
+ (id)sharedManager;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishRemoveFansWithUser:(id)a0;
- (void)ieslc_messageHandler:(id)a0 didReceiveMsg:(id)a1;
- (id)getAllFansDataFromDB;
- (void)forceFetchFullFansDataAndUpdateWithCompletion:(id /* block */)a0;
- (void)loadFansDataIfNeededWhenEnterForeground:(BOOL)a0;
- (void)loadFansDataIfNeededWhenPersonalProfileWillAppear;
- (BOOL)isLastFullFailed;
- (void)updateUsers:(id)a0;
- (void)fetchAndUpdateFansDataWithSource:(long long)a0 completion:(id /* block */)a1;
- (void)fetchAndUpdateFansDataWithContext:(id)a0 source:(long long)a1 completion:(id /* block */)a2;
- (void)clearCurrentFansTable;
- (void)deleteUsers:(id)a0;
- (void)fetchAndUpdateFansDataWhenEnterPersonalProfile;
- (void)fetchAndUpdateFansDataWhenEnterForeground;
- (BOOL)isFansDataUnavaliable;
- (void)userTriggerFetchFansDataAndUpdateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
