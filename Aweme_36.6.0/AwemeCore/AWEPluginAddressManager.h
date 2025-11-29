@class NSArray, NSMutableArray;

@interface AWEPluginAddressManager : NSObject

@property (retain) NSArray *areaArray;
@property (retain) NSMutableArray *addressArray;

+ (id)shareInstance;

- (void)editAddressWithModel:(id)a0 callBack:(id /* block */)a1;
- (void)addAddressWithModel:(id)a0 callBack:(id /* block */)a1;
- (id)getAreaArray;
- (void)fetchAreaDataWithCompletion:(id /* block */)a0;
- (id)getHeightForModel:(id)a0;
- (id)generateRequestParams:(id)a0 status:(long long)a1;
- (void)requestAllAddressData:(id /* block */)a0;
- (id)getAddressDataArray;
- (void)deleteAddressWithModel:(id)a0 index:(unsigned long long)a1 callBack:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
