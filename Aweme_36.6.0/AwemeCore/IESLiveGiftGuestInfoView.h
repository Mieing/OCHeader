@class HTSLiveAvatarImageView, NSString, UIImageView, UIView, UILabel;
@protocol IESLiveRefactGiftPanelSectionVMProtocol, IESLiveGiftGuestInfoContentViewProtocol, IESLiveCollectionViewItemProtocol, IESLiveGiftModuleRecipientRouter;

@interface IESLiveGiftGuestInfoView : UIView <IESLiveCollectionViewCellProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) id<IESLiveGiftModuleRecipientRouter> recipientRouter;
@property (retain, nonatomic) UIImageView *container;
@property (retain, nonatomic) UIView *rightContainer;
@property (retain, nonatomic) HTSLiveAvatarImageView *avatar;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UILabel *preHintLabel;
@property (retain, nonatomic) UILabel *sufHintLabel;
@property (retain, nonatomic) UIImageView *hintArrowView;
@property (retain, nonatomic) UILabel *lastHintLabel;
@property (nonatomic) BOOL enableOptUI;
@property (retain, nonatomic) UIView<IESLiveGiftGuestInfoContentViewProtocol> *currentGuestInfoTypeContainer;
@property (retain, nonatomic) id<IESLiveCollectionViewItemProtocol> item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)p_dismiss;
- (void)setupUIV2;
- (void)setupHighlightUI;
- (void)tapGuestListEntrance;
- (void)updateGuestInfo;
- (void)hideGuestInfoView;
- (void)showGuestInfoView;
- (void)updateGuestInfoV2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 useUIV2:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateView;
- (id)contentViewClass;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
