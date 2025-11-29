@class NSString;

@interface HTSLiveRelaxRoomChatData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;

+ (id)descriptor;

@end
