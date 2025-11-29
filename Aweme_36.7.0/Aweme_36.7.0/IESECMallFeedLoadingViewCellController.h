@class IESECListKitListUpdater, NSString, UICollectionReusableView, UICollectionViewCell, IESECListKitItemDataModel;

@interface IESECMallFeedLoadingViewCellController : NSObject <IESECListKitCellControllerProtocol> {
    double _height;
}

@property (weak, nonatomic) UICollectionReusableView *headerView;
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
- (double)heightForModel:(id)a0 itemWidth:(double)a1 bffItemData:(id)a2;
- (void).cxx_destruct;

@end
