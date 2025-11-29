@class IESLiveChatChannelToolbar, NSNumber, UIImageView, HTSEventForwardingView, IESLiveChatShareEmptyView, UIView, IESLivePublicScreenCollectionView;
@protocol IESLiveRoomService;

@interface IESLiveChatTabContainerView : UIView

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveChatShareEmptyView *chatEmptyView;
@property (retain, nonatomic) HTSEventForwardingView *animationContainer;
@property (retain, nonatomic) UIView *chatListContainer;
@property (retain, nonatomic) UIView *chatInteractContainer;
@property (retain, nonatomic) UIImageView *chatListBackground;
@property (retain, nonatomic) IESLivePublicScreenCollectionView *publicScreenCollectionView;
@property (retain, nonatomic) IESLiveChatChannelToolbar *toolbar;
@property (readonly, nonatomic) NSNumber *publicScreenInfoModelsCount;

- (void)didSetAttachingDIContext;
- (BOOL)isShowingEmptyView;
- (void)publicScreenWillAppearWithInfoModel:(id)a0;
- (void)addPublicScreen:(id)a0 withInfoModel:(id)a1 shouldFocus:(BOOL)a2 animated:(BOOL)a3;
- (void)showPublicScreenView:(BOOL)a0;
- (void)adjustCurrentScrollContent;
- (id)initWithRoom:(id)a0 context:(id)a1;
- (void)refreshChatEmptyView;
- (void)refreshContentWithChatChannelCount:(unsigned long long)a0;
- (void)bindAttachingDIContext;
- (double)horizonalOffset;
- (double)publicScreenBottomOffset;
- (double)toolbarBottomOffset;
- (void)hideEmptyViewIfNeed:(BOOL)a0;
- (void)updateEnablePublicScreenMessageRender:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)setBackgroundHidden:(BOOL)a0;

@end
