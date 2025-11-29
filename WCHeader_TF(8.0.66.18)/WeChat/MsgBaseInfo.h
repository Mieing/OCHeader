@class EnterLeadSpeakInfo;

@interface MsgBaseInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long chatroomFirstSeq;
@property (retain, nonatomic) EnterLeadSpeakInfo *enterLeadSpeakInfo;

+ (void)initialize;

@end
