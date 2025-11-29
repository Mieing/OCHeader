@class NSString, NSDictionary, AWEAwemeModel, NSArray;

@interface AWEDiscoverDPlayletFastEnterModel : NSObject

@property (copy, nonatomic) NSString *cacheID;
@property (copy, nonatomic) NSString *playletID;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) BOOL isFromSeriesAwemeApi;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) NSArray *awemeModels;
@property (nonatomic) long long inititalIndex;

- (id)createDataController;
- (id)p_createDataControllerOfAwemeArray;
- (id)p_createDataControllerOfAwemeModel;
- (void)trackerError:(id)a0 type:(long long)a1;
- (void).cxx_destruct;

@end
