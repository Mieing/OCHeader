@class IESECWinFeedStatusObject, IESECListKitListUpdater, IESECServiceProxy, NSString, FBKVOController, UICollectionViewCell, IESECListKitItemDataModel;
@protocol IESECWinTabService, IESECWinCommonTrackService, IESECWinDataStatusService, IESECWinFeedMapperService, IESECWinCategoryService;

@interface IESECWinFeedStatusCellController : IESECWinFeedStatusSectionController <IESECListKitCellControllerProtocol>

@property (retain, nonatomic) IESECWinFeedStatusObject *object;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCommonTrackService> *commonTrackService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinDataStatusService> *dataStatusService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinFeedMapperService> *mapper;
@property (retain, nonatomic) FBKVOController *kvoController;
@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) id cellModel;
@property (retain, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (nonatomic) long long section;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isFirstShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (void)configCell;
- (double)heightForModel:(id)a0 itemWidth:(double)a1;
- (void)setCellFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 edgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 withSectionID:(id)a2 updateRectBlock:(id /* block */)a3;
- (id)configObject;
- (void).cxx_destruct;

@end
