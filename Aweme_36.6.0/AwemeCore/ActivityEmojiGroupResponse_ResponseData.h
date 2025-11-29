@class HTSLiveActivityEmojiGroup;

@interface ActivityEmojiGroupResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveActivityEmojiGroup *emojiGroup;
@property (nonatomic) BOOL hasEmojiGroup;

+ (id)descriptor;

@end
