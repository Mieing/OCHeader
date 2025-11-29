@class TPFBKVOController, NSString;

@interface _TPFBKVOInfo : NSObject {
    TPFBKVOController *_controller;
    NSString *_keyPath;
    unsigned long long _options;
    SEL _action;
    void *_context;
    id /* block */ _block;
    unsigned char _state;
}

- (id)initWithController:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 block:(id /* block */)a3 action:(SEL)a4 context:(void *)a5;
- (id)initWithController:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 block:(id /* block */)a3;
- (id)initWithController:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 action:(SEL)a3;
- (id)initWithController:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)initWithController:(id)a0 keyPath:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void).cxx_destruct;

@end
