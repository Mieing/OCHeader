@class AWEIMShareH5Message, AWEIMMessageConversation, NSString;

@interface AWEIMBigPictureStyleContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (retain, nonatomic) AWEIMShareH5Message *message;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)h5CoverTapped:(id)a0;
- (void)p_trackH5ShareFromFeedAnchorIfNeeded:(id)a0;
- (void)trackH5ShareEventForName:(id)a0;
- (void)trackEcomH5MsgClick;
- (void)p_trackH5ShareEventForName:(id)a0;
- (void)trackH5ShareFromFeedAnchorShowIfNeeded;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (void).cxx_destruct;
- (id)displayMessage;

@end
