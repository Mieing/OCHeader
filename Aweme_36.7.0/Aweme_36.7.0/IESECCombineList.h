@class NSString, IESECCombineInfoNode, NSObject;

@interface IESECCombineList : NSObject {
    NSObject *_observer;
    id _target;
    NSString *_keypath;
    IESECCombineInfoNode *_head;
    IESECCombineInfoNode *_tail;
}

+ (id)createCombineListWithObserver:(id)a0 target:(id)a1 keypath:(id)a2;

- (void)subscribeNext:(id /* block */)a0;
- (id)initWithObserver:(id)a0 target:(id)a1 keypath:(id)a2;
- (void)p_AppendNewNode:(id)a0;
- (void).cxx_destruct;
- (id)map:(id /* block */)a0;
- (id)ignore:(id)a0;
- (id)distinctUntilChanged;
- (id)filter:(id /* block */)a0;
- (id)skip:(unsigned long long)a0;

@end
