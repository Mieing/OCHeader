@class NSString;

@interface HTSLiveGiftMsgBoard : IESLivePBBaseMessage

@property (nonatomic) BOOL forMsgBoard;
@property (copy, nonatomic) NSString *promptText;

+ (id)descriptor;

@end
