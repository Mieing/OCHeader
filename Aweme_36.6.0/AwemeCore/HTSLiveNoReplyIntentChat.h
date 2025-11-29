@class NSString, HTSLiveUser;

@interface HTSLiveNoReplyIntentChat : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long time;

+ (id)descriptor;

@end
