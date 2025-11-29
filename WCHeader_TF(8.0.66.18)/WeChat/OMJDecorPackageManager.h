@interface OMJDecorPackageManager : NSObject {
    struct SharedPtr<XMJDecorPackageManager> { struct XMJDecorPackageManager *_ptr; } _backingDecorPackageManager;
}

- (void)mj_loadDecorPackageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithBackingDecorPackageManager:(const void *)a0;
- (void)dealloc;
- (id)loadCachedDecorPackageWithIdentifier:(id)a0;
- (void)loadDecorPackageWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)applyDecorPackage:(id)a0 params:(id)a1;
- (id)clearDecorPackage;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
