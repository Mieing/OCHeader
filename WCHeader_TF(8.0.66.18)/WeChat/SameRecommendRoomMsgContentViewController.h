@class NSString, ChatroomProfileView, MMUIView, MMUIButton;
@protocol SameRecommendRoomMsgContentViewDelegate;

@interface SameRecommendRoomMsgContentViewController : BaseMsgContentViewController <ChatroomProfileViewLayoutDelegate> {
    MMUIView *m_sameRecommendToolButtonView;
    MMUIButton *m_moreButton;
}

@property (retain, nonatomic) ChatroomProfileView *chatroomProfileViewInfo;
@property (weak, nonatomic) id<SameRecommendRoomMsgContentViewDelegate> sameRecommendRoomDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)initSameRecommendToolButtonView;
- (id)getMoreButton;
- (void)updateTableLayoutAnimateDuration:(double)a0 Orientation:(long long)a1;
- (BOOL)canBecomeFirstResponder;
- (void)onTapEnterRoomButton;
- (void)viewChatroomProfile:(id)a0;
- (double)profileViewHeadLength;
- (void)openContactInfo:(id)a0;
- (void)showPreViewController:(id)a0;
- (void).cxx_destruct;

@end
