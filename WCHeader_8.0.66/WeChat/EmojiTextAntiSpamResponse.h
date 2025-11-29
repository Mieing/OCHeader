@class NSString, BaseResponse;

@interface EmojiTextAntiSpamResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL shouldBlock;
@property (retain, nonatomic) NSString *blockType;
@property (retain, nonatomic) NSString *matchRule;

+ (void)initialize;

@end
