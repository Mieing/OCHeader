@class AWEIMInterEmojiMatcherController;

@interface AWEIMAITriggerMatcher : NSObject

@property (weak, nonatomic) AWEIMInterEmojiMatcherController *parent;
@property (readonly, nonatomic) BOOL isMatcherEnable;

- (void)p_trackShowAnimationName:(id)a0;
- (BOOL)tryMatchAndPlay;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;

@end
