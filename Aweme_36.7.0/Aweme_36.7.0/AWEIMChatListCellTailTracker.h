@class NSMutableSet;

@interface AWEIMChatListCellTailTracker : NSObject

@property (retain, nonatomic) NSMutableSet *iconShowSet;
@property (retain, nonatomic) NSMutableSet *greetIconShowSet;
@property (retain, nonatomic) NSMutableSet *missedCallRecallIconShowSet;

- (id)p_getChatType:(id)a0;
- (void)removeShowIconDic;
- (void)trackShootIconShowWith:(id)a0 isChatList:(BOOL)a1;
- (void)trackGreetIconShowWith:(id)a0;
- (void)trackVerifiedIconShow;
- (void)trackMissedCallRecallButtonShowWithToken:(id)a0 callType:(id)a1;
- (void)trackMissedCallRecallButtonClick;
- (void).cxx_destruct;
- (id)init;

@end
