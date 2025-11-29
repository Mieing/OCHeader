@class AWEIMAudioMessageViewModel, NSString;

@interface AWEIMAudioContentComponent : AWEIMFlexComponent <AWEIMAudioContentInterface, AWEFormatIMConversationInjectLeftPaneGesBlockService, AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMAudioMessageViewModel *cellViewModel;
@property (nonatomic) long long audioContentCurrentPanGestureState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (BOOL)shouldFailFloatGestureRecognizer:(id)a0;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (id)audioContentViewModel;
- (void)p_setupReadKVO;
- (id)audioBodyViewModel;
- (void)p_setupAccessibilityKVO:(id)a0;
- (id)accessibilityLabelWithStat:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)displayMessage;

@end
