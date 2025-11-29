@class NSMutableDictionary, NSObject;

@interface WCMVVMBinder : NSObject {
    NSMutableDictionary *_keyPathMapping;
}

@property (readonly, weak, nonatomic) NSObject *viewComponent;

- (id)initWithViewComponent:(id)a0;
- (void)dealloc;
- (void)bindViewModelWithKeyPath:(id)a0 forObservingPropertyKeyPaths:(id)a1;
- (void)unbindViewModelWithKeyPath:(id)a0;
- (void)bindViewModelWithSelector:(SEL)a0 forObservingPropertyKeyPaths:(id)a1;
- (void)unbindViewModelWithSelector:(SEL)a0;
- (void)_didChangeViewModelWithVMKeyPath:(id)a0 fromOldObject:(id)a1 toNewObject:(id)a2;
- (void)_viewModel:(id)a0 didChangeProperty:(id)a1 fromOldValue:(id)a2 toNewValue:(id)a3;
- (id)getObjectFromChange:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
