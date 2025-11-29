@class NSMutableDictionary;

@interface IESLiveLinkmicLayoutConfigResourceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedEntranceItemsMap;
@property (retain, nonatomic) NSMutableDictionary *cachedOffsetEntranceMap;

- (void)fetchEntranceWithAdapter:(id)a0 fileName:(id)a1 channel:(id)a2 accessKey:(id)a3 completion:(id /* block */)a4;
- (id)loadDataFromBundle:(id)a0 filePath:(id)a1;
- (void)fetchDataWithForest:(id)a0 channel:(id)a1 ak:(id)a2 shouldSync:(BOOL)a3 completion:(id /* block */)a4;
- (void)fetchDataWithGecko:(id)a0 channel:(id)a1 ak:(id)a2 completion:(id /* block */)a3;
- (void)fetchLayoutOffsetConfig:(id)a0 completion:(id /* block */)a1;
- (void)fetchLayoutConfig:(id)a0 completion:(id /* block */)a1;
- (void)fetchConfigWithAdapter:(id)a0 fileName:(id)a1 channel:(id)a2 accessKey:(id)a3 completion:(id /* block */)a4;
- (id)parseConfigWithData:(id)a0 parser:(id)a1 error:(id *)a2;
- (void)fetchEntranceItems:(id)a0 completion:(id /* block */)a1;
- (void)fetchOffsetEntranceMap:(id)a0 completion:(id /* block */)a1;
- (void)fetchAllLayoutConfig:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
