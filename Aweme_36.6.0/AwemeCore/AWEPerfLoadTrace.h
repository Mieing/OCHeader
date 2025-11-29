@class NSMutableDictionary;

@interface AWEPerfLoadTrace : AWEPerfLoadObject {
    _Atomic unsigned int pendingCount;
    NSMutableDictionary *objectMap;
    double _baseTime;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithKind:(id)a0;

@end
