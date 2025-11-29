@class NSString;

@interface AWEIMBatManInviteContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenter;
- (void)p_refreshUIWithStatus:(unsigned long long)a0;
- (void)p_enterBtnTapped;
- (void)p_requestRoomStatusWithGameID:(id)a0 roomID:(id)a1 completion:(id /* block */)a2;
- (void)p_refreshBatManRoomStatus;
- (id)displayMessage;
- (id)message;

@end
