@class HTSLiveGuardInfo, NSString, UIView, IESLiveAioLinkGiftFansClubServiceImpl;
@protocol IESLiveCollectionViewItemProtocol, IESHYContainerProtocol, IESLiveRefactGiftPanelSectionVMProtocol;

@interface IESLiveHybridJoinFansClubView : UIView <IESLiveHybridContainerDelegate, IESHYHybridViewLifecycleProtocol, IESLiveCollectionViewCellProtocol, IESLiveRefactGiftPanelSectionViewProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridContainer;
@property (nonatomic) int fansClubStatus;
@property (retain, nonatomic) NSString *joinContent;
@property (retain, nonatomic) NSString *avatarUrl;
@property (retain, nonatomic) IESLiveAioLinkGiftFansClubServiceImpl *fansClubService;
@property (retain, nonatomic) NSString *fansClubLevel;
@property (retain, nonatomic) NSString *popularityRankHour;
@property (retain, nonatomic) HTSLiveGuardInfo *guardInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<IESLiveCollectionViewItemProtocol> item;
@property (retain, nonatomic) id<IESLiveRefactGiftPanelSectionVMProtocol> sectionVM;

- (void)didSetAttachingDIContext;
- (void)bindViewModel;
- (void)loadHybridContainer;
- (void)removeCurrentHybridView;
- (id)urlString;
- (void).cxx_destruct;
- (id)queryItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
