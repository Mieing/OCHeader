@interface AWESearchDeepThinkTopBarModeProvider : NSObject

@property (nonatomic) long long modeStyle;
@property (nonatomic) long long middlePageModeStyle;
@property (nonatomic) long long sugPageModeStyle;
@property (nonatomic) long long generalPageModeStyle;

- (long long)getCurrentSearchModeWithPagePosition:(long long)a0;
- (void)updateCurrentSearchMode:(long long)a0 pagePosition:(long long)a1;
- (id)initWithMode:(long long)a0;

@end
