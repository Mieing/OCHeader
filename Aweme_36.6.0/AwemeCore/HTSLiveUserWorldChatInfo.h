@class NSString;

@interface HTSLiveUserWorldChatInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSString *inputTipText;

+ (id)descriptor;

@end
