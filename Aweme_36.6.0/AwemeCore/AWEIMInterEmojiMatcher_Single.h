@class NSPointerArray, NSString;

@interface AWEIMInterEmojiMatcher_Single : AWEIMInterEmojiBaseMatcher <AWEIMInterEmojiMatcherProtocol>

@property (retain, nonatomic) NSPointerArray *fromMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMatcherEnable;
- (BOOL)isRelationEnable:(id)a0;
- (long long)matcherType;
- (id)preferedRelations;
- (BOOL)tryMatch;
- (void)willShowAnimation;
- (BOOL)canDelayShowAnimtaion;

@end
