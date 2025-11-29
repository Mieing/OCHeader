@class AWEIMIncentiveChatPrivateTicketData, NSString;

@interface AWEIMIncentiveChatPrivateTicketDataService : HTSService <IESIMUserServiceMessage, AWEIMIncentiveChatPrivateTicketDataService>

@property (retain, nonatomic) AWEIMIncentiveChatPrivateTicketData *ticketData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)updateTicketDataIfNeededWithOtherTicketRawData:(id)a0;
- (unsigned long long)todayDrawPrizeStatus;
- (double)currentUserTicketUpdateTime;
- (BOOL)todayHasTicketWithPeerUid:(id)a0;
- (void)p_setStorageData;
- (BOOL)p_checkTodayTicketDataIsExpire;
- (BOOL)p_canUpdateTicketDataWithOtherTicketRawData:(id)a0;
- (id)p_storageCacheKeyWithUid:(id)a0;
- (BOOL)p_checkUserHasDrawPrizeQuota;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
