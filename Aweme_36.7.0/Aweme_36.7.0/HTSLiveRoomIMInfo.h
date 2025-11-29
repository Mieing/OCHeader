@class NSString, NSMutableArray;

@interface HTSLiveRoomIMInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *welcomeMessagesArray;
@property (readonly, nonatomic) unsigned long long welcomeMessagesArray_Count;
@property (copy, nonatomic) NSString *roomTag;
@property (copy, nonatomic) NSString *hideGiftMessage;

+ (id)descriptor;

- (void)setRoomTag:(id)a0;
- (id)welcomeMessagesArray;

@end
