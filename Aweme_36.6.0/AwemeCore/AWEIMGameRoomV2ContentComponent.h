@class NSString;

@interface AWEIMGameRoomV2ContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

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
- (id)p_trackGameCardParams;
- (void)p_trackGameCardDidAppear;
- (void)p_trackGameDidTapped;
- (void)p_requestRoomStatusWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void)didTapCard;
- (id)p_makeHighlightedSubtitleWithString:(id)a0;
- (void)p_refreshRoomStatus;
- (id)displayMessage;
- (id)message;

@end
