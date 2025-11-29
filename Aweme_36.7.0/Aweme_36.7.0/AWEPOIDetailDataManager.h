@class AWEPOIDetailConstData;

@interface AWEPOIDetailDataManager : NSObject

@property (retain, nonatomic) AWEPOIDetailConstData *constData;
@property (nonatomic) BOOL isRequestOnAir;

+ (id)doPOIDetailRequestWithParam:(id)a0 completion:(id /* block */)a1;
+ (id)getExpectedImageSizeInfo;

- (void)rx_store:(id)a0 didSetWithModule:(id)a1;
- (void)fetchDataWithDetailCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)store;

@end
