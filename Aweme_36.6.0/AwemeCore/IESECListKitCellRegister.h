@class NSMutableDictionary;

@interface IESECListKitCellRegister : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *cellControllerClassMap;

+ (id)defaultRegister;

- (void)registerCellControllerClass:(Class)a0 withItemType:(unsigned long long)a1;
- (Class)getCellControllerClassForItem:(unsigned long long)a0;
- (Class)getCellClassForItem:(unsigned long long)a0;
- (Class)getCellModelClassForItem:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
