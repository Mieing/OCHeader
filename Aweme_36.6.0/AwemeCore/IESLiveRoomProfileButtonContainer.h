@class NSString, IESLiveRoomProfileFollowButton, UIView, IESLiveRoomProfileOperationViewModel;
@protocol IESLiveRoomProfileButtonDelegate;

@interface IESLiveRoomProfileButtonContainer : UIView <IESLivePrivilegeEntranceProfileActions, IESLiveRoomProfileButtonContainerDelegate, IESLiveRoomProfileButtonContainerOuterProtocol>

@property (retain, nonatomic) IESLiveRoomProfileOperationViewModel *viewModel;
@property (nonatomic) BOOL isFollow;
@property (retain, nonatomic) IESLiveRoomProfileFollowButton *followButton;
@property (retain, nonatomic) UIView<IESLiveRoomProfileButtonDelegate> *revenueView;
@property (weak, nonatomic) UIView *backGroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operationButtonWithViewModel:(id)a0;

- (void)didSetAttachingDIContext;
- (void)setupContainer;
- (void)playFollowAnimation;
- (void)reloadContainer;
- (void)profileViewDidCreated;
- (void)playDefaultAfterFollowAnimation;
- (void).cxx_destruct;
- (void)addObserver;
- (void)clearObserver;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })containerSize;

@end
