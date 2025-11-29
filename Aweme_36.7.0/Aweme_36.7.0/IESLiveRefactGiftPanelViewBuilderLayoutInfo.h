@interface IESLiveRefactGiftPanelViewBuilderLayoutInfo : NSObject

@property (nonatomic) double alienHeight;
@property (nonatomic) double averageHeight;
@property (nonatomic) double landscapeGiftPanelViewHeightOffset;
@property (nonatomic) double sectionInsertLeft;
@property (nonatomic) double safeAreaViewHeight;
@property (nonatomic) BOOL liveGiftPanelNewArchitecture;
@property (nonatomic) double bottomContainerHeight;
@property (nonatomic) double collectionListHeight;
@property (nonatomic) double oldPanelDynamicCollectionViewTopPadding;
@property (nonatomic) long long padAddRows;
@property (nonatomic) double itemHeight;
@property (nonatomic) double panelCollectionHeight;
@property (nonatomic) double panelWidth;
@property (nonatomic) unsigned long long verticalGiftListColumnCount;
@property (readonly, nonatomic) double sectionInsertRight;

- (double)collectionViewTopPadding;
- (double)tabPanelBottomViewCompensateHeightOffset;
- (id)initWithGiftPanelNewArchitecture:(BOOL)a0 diContext:(id)a1;

@end
