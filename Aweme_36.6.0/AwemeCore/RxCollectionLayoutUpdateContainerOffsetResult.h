@class NSString, NSMutableDictionary;

@interface RxCollectionLayoutUpdateContainerOffsetResult : NSObject <RxCollectionLayoutUpdateContainerOffsetResult> {
    NSMutableDictionary *_invalidatedAuxiliaries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)invalidatedAuxillaryKinds;
- (id)init;
- (void)addInvalidatedSupplementaryForKind:(id)a0 indexPath:(id)a1;
- (id)indexPathsForInvalidatedSupplementariesOfKind:(id)a0;

@end
