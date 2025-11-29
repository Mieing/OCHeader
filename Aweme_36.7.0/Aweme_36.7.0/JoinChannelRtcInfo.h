@class NSString;

@interface JoinChannelRtcInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *token;

+ (id)descriptor;

@end
