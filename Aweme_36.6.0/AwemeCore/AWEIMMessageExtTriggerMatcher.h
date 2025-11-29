@class AWEIMInterEmojiMatcherController;

@interface AWEIMMessageExtTriggerMatcher : NSObject

@property (weak, nonatomic) AWEIMInterEmojiMatcherController *parent;
@property (nonatomic) BOOL formatMatchEnable;
@property (readonly, nonatomic) BOOL isMatcherEnable;

- (void)p_trackShowAnimationName:(id)a0;
- (BOOL)tryMatchAndPlay;
- (void)p_trackFormatShowAnimation:(id)a0 sourceName:(id)a1;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;

@end
