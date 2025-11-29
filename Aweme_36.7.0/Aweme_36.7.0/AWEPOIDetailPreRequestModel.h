@class NSString, NSDictionary, DitoPageModel, AWEGoodsDetailPageContext, NSMutableArray;

@interface AWEPOIDetailPreRequestModel : NSObject

@property (retain, nonatomic) NSDictionary *data;
@property (nonatomic) BOOL lynxReady;
@property (nonatomic) BOOL requestFinish;
@property (weak, nonatomic) AWEGoodsDetailPageContext *context;
@property (copy, nonatomic) NSString *bundle;
@property (retain, nonatomic) NSMutableArray *tags;
@property (retain, nonatomic) NSDictionary *cjInfo;
@property (retain, nonatomic) DitoPageModel *pageModelForRefresh;
@property (nonatomic) BOOL isRefresh;

- (void)notifyGoodsDetailRefreshedWithTag:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithBundle:(id)a0;
- (void)notify;

@end
