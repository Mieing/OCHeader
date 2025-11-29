@class IESECListKitListUpdater, NSString, IESECLynxCardBridgeMethod, UICollectionViewCell, IESECListKitItemDataModel;
@protocol IESECListKitLynxCardLifeCycle, IESECListKitLynxCardControllerDelegate;

@interface IESECListKitLynxCellController : NSObject <IESECLynxCollectionViewCellDelegate, IESECListKitCellControllerProtocol, IESECLynxCardDelegate>

@property (nonatomic) BOOL isReloadingLayout;
@property (retain, nonatomic) IESECLynxCardBridgeMethod *dynamicDataJSB;
@property (nonatomic) BOOL needUpdateBorder;
@property (weak, nonatomic) id<IESECListKitLynxCardLifeCycle> lynxCardDelegate;
@property (weak, nonatomic) id<IESECListKitLynxCardControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (weak, nonatomic) UICollectionViewCell *cell;
@property (retain, nonatomic) id cellModel;
@property (retain, nonatomic) IESECListKitItemDataModel *bffItemData;
@property (nonatomic) long long section;
@property (nonatomic) long long index;
@property (nonatomic) BOOL isFirstShow;

+ (Class)cellModelClass;
+ (Class)cellClass;

- (void)viewDidFirstScreen:(id)a0;
- (void)lynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void)lynxCard:(id)a0 didLoadFail:(id)a1;
- (void)lynxCard:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)lynxCard:(id)a0 receiveError:(id)a1;
- (void)lynxCard:(id)a0 onSetup:(id)a1;
- (void)shouldRemoveSelf:(id)a0 animated:(BOOL)a1;
- (void)lynxCard:(id)a0 didUpdateDataWithLynxViewFromType:(unsigned long long)a1 perfDict:(id)a2;
- (BOOL)pageDidAppeared;
- (void)lynxCardDataChanged:(id)a0;
- (void)lynxCard:(id)a0 willSendPageVisibleEvents:(BOOL)a1 source:(unsigned long long)a2 isFirstShow:(BOOL)a3;
- (void)didSelected;
- (void)configCell;
- (void)lynxCard:(id)a0 setupPerf:(id)a1;
- (void)lynxCard:(id)a0 updatePerf:(id)a1;
- (double)deviceScaleRatio;
- (void)updateLayoutAndCanBeCanceled;
- (double)heightForModel:(id)a0 itemWidth:(double)a1;
- (void)willDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)didEndDisplayWithSource:(unsigned long long)a0 extraParams:(id)a1;
- (void)mediaPlayerPlayWithAutoPlayDuration:(double)a0 autoPlayManager:(id)a1 completeBlock:(id /* block */)a2;
- (void)updateBorderRadius;
- (void)mediaPlayerPause;
- (void)registerBridgesIfNeed;
- (void)updateBorderRadiusListWithCellSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateListLayoutLynxCard:(id)a0 sizeDidChanged:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)init;

@end
