@class IESECListKitListModel, IESECListKitCardPreloader, NSString, IESECListKitListUpdater, NSMutableDictionary, NSDictionary, IESECListKitTimingModel, NSMutableArray, UICollectionView, UIColor;
@protocol IESECListKitLynxCardControllerDelegate, IESECListKitBaseListViewControllerProtocol, IESECListKitLynxCardLifeCycle, IESECListCardsContextDelegate;

@interface IESECListKitBFFContext : NSObject

@property (retain, nonatomic) IESECListKitTimingModel *timingModel;
@property (retain, nonatomic) NSMutableArray *xBridges;
@property (retain, nonatomic) NSMutableArray *bridges;
@property (retain, nonatomic) IESECListKitListUpdater *listUpdater;
@property (retain, nonatomic) NSMutableDictionary *cellControllerMap;
@property (retain, nonatomic) id bizContext;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<IESECListKitBaseListViewControllerProtocol> viewController;
@property (weak, nonatomic) IESECListKitListModel *listModel;
@property (copy, nonatomic) NSDictionary *ecExtraGlobalProps;
@property (copy, nonatomic) NSDictionary *rootGlobalProps;
@property (copy, nonatomic) NSDictionary *ecBizInfo;
@property (weak, nonatomic) id<IESECListKitLynxCardLifeCycle> lynxCardLifeCycle;
@property (weak, nonatomic) id<IESECListKitLynxCardControllerDelegate> lynxCardControllerDelegate;
@property (weak, nonatomic) id<IESECListCardsContextDelegate> listCardsContextDelegate;
@property (weak, nonatomic) IESECListKitCardPreloader *lynxCardPreloader;
@property (nonatomic) BOOL useForest;
@property (nonatomic) double updateListWithDelayJump;
@property (nonatomic) long long lynxThreadStrategy;
@property (nonatomic) BOOL useCustomLoadingColorForFeedLynxCard;
@property (retain, nonatomic) UIColor *feedLynxCardLoadingColor;
@property (copy, nonatomic) NSDictionary *hybridMonitorContext;
@property (copy, nonatomic) NSString *hmBid;
@property (nonatomic) BOOL optLynxViewLoad;
@property (nonatomic) BOOL disableCardMonitor;

- (id)getCellControllerForItemType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
