@interface AWEIMMessageGroupChainsContentComponent : AWEIMFlexComponentSwiftAdapter <AWEIMMenuSearchContentPluginProtocol, AWEIMMessageContentInterface>

@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)searchAttributedString;
- (id)init;
- (id)displayMessage;

@end
