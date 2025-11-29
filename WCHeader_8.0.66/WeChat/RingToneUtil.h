@interface RingToneUtil : NSObject

+ (id)GenTimeStringWith:(int)a0;
+ (id)GenCircleButtonImage:(id)a0 coler:(id)a1;
+ (unsigned long long)GetRingSourceTypeBy:(unsigned long long)a0;
+ (void)RemindCallerSetRingToneFromChat:(id)a0;
+ (void)RemindReceiverUpdateRingToneFromChat:(id)a0;
+ (void)SendSetRingToneMessageFromChat:(id)a0 isCaller:(BOOL)a1;
+ (BOOL)IsSeeFriendNewRingTipEnabled;
+ (void)SendSeeNewRingTipMsgForFriend:(id)a0 ring:(id)a1;
+ (void)__SendSeeNewRingTipMsgForFriend:(id)a0 ring:(id)a1;

@end
