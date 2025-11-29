@class NSMapTable;

@interface AWEProfileServiceCenter : NSObject

@property (retain, nonatomic) NSMapTable *serviceToImpTable;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (void)bindService:(id)a0 implementation:(id)a1;
- (id)serviceImp:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
