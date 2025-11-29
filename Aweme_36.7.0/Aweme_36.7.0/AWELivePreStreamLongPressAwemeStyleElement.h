@class IESLiveLongPressStore, NSString, IESLiveRoomService, UILongPressGestureRecognizer;

@interface AWELivePreStreamLongPressAwemeStyleElement : AWELiveBaseElement <IESLiveLongPressActions, AWEUserMessage>

@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (retain, nonatomic) IESLiveLongPressStore *store;
@property (readonly, nonatomic) IESLiveRoomService *roomService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)initializeElement;
- (void)didSetAttachingDIContext;
- (BOOL)shouldActivateElementWithData:(id)a0;
- (void)preloadElement;
- (BOOL)onLiveRoomDeletedByLongPress:(id)a0;
- (void)followAnchorSuccessWithLongPress:(id)a0;
- (void)unfollowAnchorSuccessWithLongPress:(id)a0;
- (void)followAnchorSuccessWithLongPress;
- (void)unfollowAnchorSuccessWithLongPress;
- (void)triggerLongPress:(id)a0;
- (void)deleteRoomFromFeedWithRoomID:(id)a0;
- (BOOL)enableLongPress:(id)a0;
- (BOOL)enableLongPressDislike;
- (BOOL)disableLongPressDislikeDelete;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)dealloc;

@end
