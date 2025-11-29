@class NSMapTable;

@interface _IESECAtomSharedObserver : NSObject {
    NSMapTable *_observationInfoMap;
}

+ (id)sharedObserver;

- (void)registerObservation:(id)a0;
- (void)unregisterObservation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
