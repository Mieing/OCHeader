@class TIMXPBNMessageBody;

@interface TIMXPBNStrangerNewMessageNotify : GPBMessage

@property (retain, nonatomic) TIMXPBNMessageBody *message;
@property (nonatomic) BOOL hasMessage;

+ (id)descriptor;

@end
