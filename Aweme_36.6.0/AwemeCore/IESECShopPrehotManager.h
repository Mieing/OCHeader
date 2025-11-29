@class IESECShopTabModel, IESECStoreWebTabViewController;

@interface IESECShopPrehotManager : NSObject

@property (retain, nonatomic) IESECStoreWebTabViewController *webVc;
@property (retain, nonatomic) IESECShopTabModel *tabModel;

+ (id)tabModelWithPreloadInfo:(id)a0;
+ (id)sharedInstance;

- (void)preloadISVContainerWithModel:(id)a0;
- (void)destory;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
