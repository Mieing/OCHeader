@class FinderWxAppInfo;

@interface MMFinderLiveShopContext_AnchorFlashSaleConfig : NSObject

@property (nonatomic) BOOL targetedFlashSaleEnable;
@property (nonatomic) BOOL publicFlashSaleEnable;
@property (nonatomic) BOOL flashSaleFirstOpenFlag;
@property (nonatomic) BOOL historyEnable;
@property (retain, nonatomic) FinderWxAppInfo *sendPage;
@property (retain, nonatomic) FinderWxAppInfo *orderPage;
@property (nonatomic) BOOL enableShowFlashSale;
@property (readonly, nonatomic) BOOL shouldShowSwitch;
@property (readonly, nonatomic) BOOL shouldShowTargetedFlashSale;
@property (readonly, nonatomic) BOOL shouldShowPublicFlashSale;
@property (readonly, nonatomic) BOOL shouldShowOrderHistory;

- (id)init;
- (void)updateWithShopShelfInfo:(id)a0;
- (void)updateWithConfigInfo:(id)a0 source:(id)a1;
- (void).cxx_destruct;

@end
