@interface SharedPostsInjector : NSObject <AWESharedPostsInjector> {
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, weak) void /* function */ privatePostsViewModel;
@property (nonatomic, weak) void /* function */ controller;

- (void)registerClassForCell:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;

@end
