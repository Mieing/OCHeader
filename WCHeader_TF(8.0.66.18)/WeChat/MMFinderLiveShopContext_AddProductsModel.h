@class FinderWxAppInfo;

@interface MMFinderLiveShopContext_AddProductsModel : NSObject

@property (nonatomic) unsigned long long openType;
@property (retain, nonatomic) FinderWxAppInfo *shopAssistApp;
@property (retain, nonatomic) FinderWxAppInfo *selectionCenterHomePage;

- (void)updateWithShopShelfInfo:(id)a0;
- (void).cxx_destruct;

@end
