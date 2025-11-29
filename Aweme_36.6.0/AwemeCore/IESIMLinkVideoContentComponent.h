@class NSString;

@interface IESIMLinkVideoContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)addForwardMsgResourceFromComponent;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)coverTapped;
- (id)p_receiverUid;
- (id)urlDataController;
- (void)p_trackTapEvent:(id)a0;
- (void)updateUnavailableStateWithTextMessage:(id)a0;
- (void)updateUrlLinkVideoWithTextMessage:(id)a0;
- (id)displayMessage;
- (void)dealloc;

@end
