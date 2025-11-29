@class NSString, GameAppStoreReportInfo, SKStoreProductViewController;

@interface GameAppStorePreloadItem : NSObject

@property (retain, nonatomic) SKStoreProductViewController *preloadProdctVc;
@property (retain, nonatomic) NSString *preloadProductId;
@property (nonatomic) BOOL preloadLoadFailed;
@property (retain, nonatomic) GameAppStoreReportInfo *reportInfo;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) double startLoadTime;
@property (nonatomic) double loadCompleteTime;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
