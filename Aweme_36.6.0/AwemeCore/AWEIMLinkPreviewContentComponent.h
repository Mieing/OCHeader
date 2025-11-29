@class BDUGFlowAuthToken, NSString, AWEIMLinkPreviewDataController;

@interface AWEIMLinkPreviewContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMLinkPreviewDataController *dataController;
@property (retain, nonatomic) BDUGFlowAuthToken *lastAuthToken;
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
- (id)currentDataController;
- (void)coverTapped;
- (void)updateAuthToken;
- (id)p_receiverUid;
- (id)urlDataController;
- (void)p_trackTapEvent:(id)a0;
- (void).cxx_destruct;
- (id)displayMessage;
- (void)dealloc;

@end
