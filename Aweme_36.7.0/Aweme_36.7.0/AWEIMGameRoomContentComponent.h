@class NSString;

@interface AWEIMGameRoomContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenter;
- (void)p_refreshUIWithStatus:(unsigned long long)a0;
- (void)p_requestRoomStatusWithGameID:(id)a0 roomID:(id)a1 completion:(id /* block */)a2;
- (id)p_trackGameCardParams;
- (void)p_trackGameCardDidAppear;
- (void)p_trackGameDidTapped;
- (void)didTapCard;
- (void)p_checkRoomStatus;
- (id)p_makeHighlightedSubtitleWithString:(id)a0;
- (id)displayMessage;
- (id)message;

@end
