@interface HTSLiveMsgOptPanel_OptItem : IESLivePBBaseMessage

@property (nonatomic) long long itemId;
@property (nonatomic) long long displayArea;
@property (nonatomic) long long priority;

+ (id)descriptor;

@end
