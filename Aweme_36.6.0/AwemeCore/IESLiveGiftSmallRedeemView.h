@class IESLiveGiftRedeemItem, NSString, UILabel, UIView;
@protocol IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveGiftSmallRedeemView : UIView <IESLiveCollectionViewCellProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (nonatomic) BOOL didTrackShow;
@property (nonatomic) double originWidth;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIView *diamondContainer;
@property (retain, nonatomic) UILabel *diamondLabel;
@property (retain, nonatomic) IESLiveGiftRedeemItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)didSetAttachingDIContext;
- (void)p_tap;
- (void)updateDiamondText:(id)a0;
- (void)setDiamondContainerPath;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)updateUI:(BOOL)a0;

@end
