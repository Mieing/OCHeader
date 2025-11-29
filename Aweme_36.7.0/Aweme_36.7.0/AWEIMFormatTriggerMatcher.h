@class NSString, AWEIMInterEmojiMatcherController;

@interface AWEIMFormatTriggerMatcher : NSObject

@property (weak, nonatomic) AWEIMInterEmojiMatcherController *parent;
@property (copy, nonatomic) NSString *effectKeyWord;

- (BOOL)tryMatchAndPlay;
- (id)p_matchKeyWord:(id)a0;
- (void)p_trackEffectShow:(id)a0 sourceName:(id)a1;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;

@end
