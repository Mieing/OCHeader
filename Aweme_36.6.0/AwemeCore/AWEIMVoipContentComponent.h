@class NSString;

@interface AWEIMVoipContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface, UIGestureRecognizerDelegate>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (double)maxWidthWithMessage:(id)a0;
+ (struct CGSize { double x0; double x1; })textSizeWithText:(id)a0;

- (void)didTapContent;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)presenter:(id)a0 didUpdateWithView:(id)a1;
- (void)p_createSmallCardPresenter;
- (id)voipMessage;
- (void)p_createLabelPresenter;
- (void)p_updateLabelProps:(id)a0 style:(id)a1;
- (struct CGSize { double x0; double x1; })p_calculateSizeWithStr:(id)a0;
- (void)p_updateCardProps:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)displayMessage;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;

@end
