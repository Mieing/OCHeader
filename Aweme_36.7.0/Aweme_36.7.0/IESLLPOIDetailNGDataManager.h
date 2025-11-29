@class IESLLPOIDetailNGPageContext;
@protocol IESLLHttpTask;

@interface IESLLPOIDetailNGDataManager : NSObject

@property (weak, nonatomic) id<IESLLHttpTask> asyncUIHttpTask;
@property (nonatomic) BOOL isRequestOnAir;
@property (weak, nonatomic) IESLLPOIDetailNGPageContext *context;

- (void)fetchAsyncUIWithPoiID:(id)a0 longitude:(double)a1 latitude:(double)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
