@class NSString;

@interface AWEIMSubcriptionContentComponent : AWEIMFlexComponent <AWEIMSystemMessageTemplateAction, AWEIMMessageContentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenterIfNeed;
- (void)messageCellDidLongPressed:(id)a0;
- (void)onCoverageTap;
- (id)displayMessage;

@end
