@class NSString, AWEIMUnreadMessagesConsumerHints, AWEIMChatListCustomHintsContentModel, NSArray, NSAttributedString;

@interface AWEIMChatListCustomHintsViewModel : NSObject

@property (copy) NSString *sessionId;
@property (retain, nonatomic) AWEIMUnreadMessagesConsumerHints *unreadMessagesConsumerHints;
@property (retain, nonatomic) NSAttributedString *engageGroupOwnerHint;
@property (retain, nonatomic) NSAttributedString *milestoneBirthdayHint;
@property (retain, nonatomic) NSAttributedString *milestoneFansCountHint;
@property (retain, nonatomic) NSAttributedString *milestoneLiveAnniversaryHint;
@property (retain, nonatomic) NSAttributedString *milestonePersonCertHint;
@property (retain, nonatomic) NSAttributedString *milestoneEcommerceCertHint;
@property (retain, nonatomic) NSAttributedString *ktvGroupPersonCountHint;
@property (retain, nonatomic) NSAttributedString *strangerBoxHint;
@property (retain, nonatomic) NSAttributedString *liveFansSubscriptionAutoRemoveHint;
@property (retain, nonatomic) NSAttributedString *consecutiveChatDaysHintAttributedString;
@property (retain) AWEIMChatListCustomHintsContentModel *preferredHint;
@property (retain, nonatomic) NSAttributedString *contentAttributedString;
@property (retain, nonatomic) NSString *timeString;
@property (copy, nonatomic) NSArray *avatarURLList;

- (void)updatePreferredHints;
- (void)updateWithStrangerBoxlHint:(id)a0;
- (void)updateWithUnreadMessagesConsumerHints:(id)a0;
- (void)updateWithEngageGroupOwnerHint:(id)a0;
- (void)updateWithConsecutiveChatDaysHint:(id)a0;
- (void)updateWithMilestoneHint:(id)a0 type:(long long)a1;
- (void)updateWithKTVGroupPersonCountHint:(id)a0;
- (void)updateWithLiveFansSubscriptionAutoRemoveHint:(id)a0;
- (void).cxx_destruct;
- (id)initWithSessionId:(id)a0;

@end
