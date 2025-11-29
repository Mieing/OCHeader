@class NSString, IESLiveKTVOrderPanelDynamicRecommendRoomSectionModel, UIView;
@protocol IESHYContainerProtocol;

@interface IESLiveKTVOrderPanelDynamicRecommendRoomSectionCell : UICollectionViewCell <IESHYHybridViewLifecycleProtocol, IESLiveKTVOrderPanelSectionCellProtocol>

@property (retain, nonatomic) UIView<IESHYContainerProtocol> *lynxView;
@property (retain, nonatomic) IESLiveKTVOrderPanelDynamicRecommendRoomSectionModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
