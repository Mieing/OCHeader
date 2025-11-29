@class NSMapTable;

@interface AmoebaExtensionCenter : NSObject {
    NSMapTable *m_extendsions;
}

+ (id)shareInstance;

- (id)init;
- (void)registerExtension:(id)a0 withTarget:(id)a1;
- (void)unRegisterExtension:(id)a0 withTarget:(id)a1;
- (void)callExtension:(id)a0 selector:(SEL)a1 block:(id /* block */)a2;
- (void).cxx_destruct;

@end
