@interface AWEPOIDetailMapDataManager : NSObject

@property (nonatomic) BOOL isRequestOnAir;

- (void)fetchDetailMapDataWithPOIID:(id)a0 sceneType:(unsigned long long)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)fetchDetailMapDataWithPOIID:(id)a0 completion:(id /* block */)a1;
- (void)fetchIMShareDetailMapDataWithPOIID:(id)a0 completion:(id /* block */)a1;

@end
