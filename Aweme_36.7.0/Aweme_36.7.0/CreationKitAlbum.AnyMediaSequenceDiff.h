@class NSIndexSet;

@interface CreationKitAlbum.AnyMediaSequenceDiff : _TtCs12_SwiftObject <CKAMediaSequenceDiffProtocol> {
    void /* function */ removedIndexes;
    void /* function */ insertedIndexes;
    void /* function */ changedIndexes;
    void /* unknown type, empty encoding */ moves;
    void /* unknown type, empty encoding */ $__lazy_storage_$_moveArray;
}

@property (nonatomic, readonly) NSIndexSet *removedIndexes;
@property (nonatomic, readonly) NSIndexSet *insertedIndexes;
@property (nonatomic, readonly) NSIndexSet *changedIndexes;

- (void)iterateMoves:(id /* block */)a0;

@end
