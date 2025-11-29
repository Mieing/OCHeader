@class NSMutableArray, DitoDataSupplierRequestModel;

@interface DitoDataSupplierStoreModel : NSObject

@property (retain, nonatomic) DitoDataSupplierRequestModel *requestModel;
@property (retain, nonatomic) NSMutableArray *subscribersArray;

- (void)removeRequestObserver;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
