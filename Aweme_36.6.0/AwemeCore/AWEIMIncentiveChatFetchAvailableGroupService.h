@class NSArray, NSString, AWEIMIncentiveAvailableGroupChatDataManager;

@interface AWEIMIncentiveChatFetchAvailableGroupService : HTSService <AWEIMIncentiveChatFetchAvailableGroupService, IESIMUserServiceMessage>

@property (retain, nonatomic) AWEIMIncentiveAvailableGroupChatDataManager *availableGroupChatDataManager;
@property (nonatomic) BOOL coldStartFinish;
@property (nonatomic) BOOL startIMFinish;
@property (nonatomic) BOOL messageTabFirstFrameFinish;
@property (retain, nonatomic) NSArray *remoteData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)setupAvailableGroupChatDataManager;
- (id)currentUserAvailableGroupChat;
- (void)messageTabFirstFrameFinishAndCanFetchDataFromDB;
- (void)incentiveChatColdStartDataFinishAndCanFetchRemoteDataWithRemoteData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
