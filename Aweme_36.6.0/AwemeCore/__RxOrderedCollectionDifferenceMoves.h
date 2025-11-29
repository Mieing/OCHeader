@class NSMutableDictionary;

@interface __RxOrderedCollectionDifferenceMoves : NSObject {
    NSMutableDictionary *_removeDict;
    NSMutableDictionary *_insertDict;
    unsigned long long _firstRemove;
}

- (unsigned long long)associatedIndexForChangeWithType:(long long)a0 index:(unsigned long long)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithChanges:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
