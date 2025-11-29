@class TIMXPBNMessageBody;

@interface TIMXPBNMessageInfo : GPBMessage

@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) TIMXPBNMessageBody *body;
@property (nonatomic) BOOL hasBody;

+ (id)descriptor;

@end
