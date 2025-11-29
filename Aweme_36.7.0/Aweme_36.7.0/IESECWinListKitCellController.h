@class IESECListKitListUpdater, NSString, IESECServiceProxy, IESECListKitItemDataModel, UICollectionViewCell, IESECWinContext;
@protocol IESECWinTabService, IESECWinDataService, IESECWinTabLayoutService, IESECWinFeedService, IESECWinLynxCardService, IESECWinSplitService;

@interface IESECWinListKitCellController : IGListSectionController <IESECWinListKitNativeCellLynxCardDelegate, IESECWinListKitCellControllerProtocol>

@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataService> *dataService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedService> *feedService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabLayoutService> *tabLayoutService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) id cellModel;
@property (retain, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (nonatomic) long long section;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isFirstShow;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (void)configCell;
- (void)updateLayoutAndCanBeCanceled;
- (id)getViewController;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (id)headerObjectForCellModel:(id)a0 sectionID:(id)a1;
- (id)objectForCellModel:(id)a0;
- (double)lynxExtensionCardHeightForModel:(id)a0;
- (id)globalPropsExtra:(id)a0;
- (void)updateListLayoutWithLynxCard:(id)a0;
- (id)customConfigWithLynxData:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
