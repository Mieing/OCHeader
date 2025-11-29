@class AWEIMMessageEmojiConfig, NSArray;

@interface AWEIMMessageEmojiConfigModel : AWEBaseApiModel

@property (retain, nonatomic) AWEIMMessageEmojiConfig *singleMsgEmoji;
@property (copy, nonatomic) NSArray *multiMsgEmoji;
@property (nonatomic) long long msgEmojiGuideTimesLimitPerDay;
@property (nonatomic) BOOL closeMsgEmojiInnerPush;
@property (nonatomic) long long perMsgEmojiInnerPushLimit;

+ (id)singleMsgEmojiJSONTransformer;
+ (id)multiMsgEmojiJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
