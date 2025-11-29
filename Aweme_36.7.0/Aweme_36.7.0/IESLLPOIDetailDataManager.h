@class IESLLPOIDetailConstData;
@protocol IESLLHttpTask;

@interface IESLLPOIDetailDataManager : NSObject

@property (retain, nonatomic) IESLLPOIDetailConstData *constData;
@property (weak, nonatomic) id<IESLLHttpTask> asyncUIHttpTask;
@property (nonatomic) BOOL isRequestOnAir;

+ (id)doPOIDetailRequestWithParam:(id)a0 completion:(id /* block */)a1;
+ (id)getExpectedImageSizeInfo;

- (void)iesll_rx_store:(id)a0 didSetWithModule:(id)a1;
- (void)fetchDataWithDetailCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)store;
- (void)dealloc;

@end
