@class NSString, FinderJumpInfo;

@interface PromptBubbleInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long position;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (nonatomic) unsigned int bubbleDuration;

+ (void)initialize;

@end
