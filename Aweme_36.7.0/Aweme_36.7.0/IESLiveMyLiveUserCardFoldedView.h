@class IESLiveCircleRollLabel;

@interface IESLiveMyLiveUserCardFoldedView : IESLiveUserCard

@property (retain, nonatomic) IESLiveCircleRollLabel *nickNameLabel;

- (void)didSetAttachingDIContext;
- (void)setupUIContainer;
- (void)setupBackgroundContainer;
- (id)initWithStore:(id)a0 landscapeMode:(BOOL)a1;
- (id)colorOfBackground;
- (void)setupUsercardHierarchy;
- (id)createNickNameLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)createAvatarView;

@end
