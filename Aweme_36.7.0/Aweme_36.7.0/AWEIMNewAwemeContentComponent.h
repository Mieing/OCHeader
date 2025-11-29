@class NSString;

@interface AWEIMNewAwemeContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (id)zoomTransitionTargetView;
- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenter;
- (void)p_addBind;
- (void)p_updateCardBackgroundColor;
- (void)p_tapCardAction;
- (void)p_updateLoadingAnimating;
- (id)displayMessage;
- (id)message;

@end
