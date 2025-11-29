@class NSString;

@interface AWEIMInterEmojiAnimationMatcher_Random : AWEIMInterEmojiBaseMatcher <AWEIMInterEmojiAnimationMatcherProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMatcherEnable;
- (id)getModelWithRandomValue:(long long)a0 fromSource:(id)a1;
- (id)matchEnableAnimationsFrom:(id)a0;

@end
