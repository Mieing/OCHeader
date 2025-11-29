@class HTSLiveAvatarImageView, NSString, UIImageView, UILabel, UIView, UIButton;
@protocol IESLiveCollectionViewItemProtocol, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveJoinFansClubView : UIView <IESLiveCollectionViewCellProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) HTSLiveAvatarImageView *avatarImageView;
@property (retain, nonatomic) UILabel *joinLabel;
@property (retain, nonatomic) UIButton *joinButton;
@property (retain, nonatomic) UIView *fansClubIconContainerView;
@property (retain, nonatomic) UIImageView *fansClubIconView;
@property (retain, nonatomic) UILabel *fansClubLevelLabel;
@property (nonatomic) int fansClubStatus;
@property (retain, nonatomic) UIImageView *maskImageView;
@property (retain, nonatomic) id<IESLiveCollectionViewItemProtocol> item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)joinButtonClick;
- (void)p_updateViewStatus;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
