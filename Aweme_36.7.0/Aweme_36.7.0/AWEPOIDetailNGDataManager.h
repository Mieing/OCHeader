@class AWEPOIDetailNGPageContext;
@protocol AWEHttpTask;

@interface AWEPOIDetailNGDataManager : NSObject

@property (weak, nonatomic) id<AWEHttpTask> asyncUIHttpTask;
@property (nonatomic) BOOL isRequestOnAir;
@property (weak, nonatomic) AWEPOIDetailNGPageContext *context;

- (void)fetchAsyncUIWithPoiID:(id)a0 longitude:(double)a1 latitude:(double)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
