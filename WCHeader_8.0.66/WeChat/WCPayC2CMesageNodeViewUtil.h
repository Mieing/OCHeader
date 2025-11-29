@interface WCPayC2CMesageNodeViewUtil : NSObject

+ (id)getAAC2CMessageDescDict:(id)a0;
+ (BOOL)isNeedShowMentionedMeMsg:(id)a0;
+ (id)getCommonAASelectMemberMsgDescWithMsgWrap:(id)a0;
+ (id)getActivityAAMsgDescWithMsgWrap:(id)a0;
+ (id)getCustomizeAAMsgDescWithMsgWrap:(id)a0;
+ (id)getPayerTitleWithPayerState:(unsigned long long)a0 payerAmount:(double)a1;
+ (id)getReceiverTitleWithReceiverState:(unsigned long long)a0 wordingMember:(unsigned long long)a1 aaType:(unsigned int)a2;
+ (unsigned long long)getReceiverBubbleTypeWithReceiveState:(unsigned long long)a0;
+ (unsigned long long)getPayerBubbleTypeWithPayerState:(unsigned long long)a0;
+ (id)getPayerIconImgNameWithPayerState:(unsigned long long)a0;
+ (id)getReceiverIconImgNameWithReceiverState:(unsigned long long)a0;

@end
