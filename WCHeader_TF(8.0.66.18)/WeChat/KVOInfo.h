@class NSString, KVOController;

@interface KVOInfo : NSObject {
    KVOController *m_controller;
    NSString *m_keyPath;
    unsigned long long m_options;
    unsigned char m_state;
    SEL m_action;
    void *m_context;
    id /* block */ m_block;
}

- (id)initWithController:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 block:(id /* block */)a3 action:(SEL)a4 context:(void *)a5;
- (id)initWithController:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 block:(id /* block */)a3;
- (id)initWithController:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 action:(SEL)a3;
- (id)initWithController:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)initWithController:(id)a0 keyPath:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
