@class NSString, NSMapTable;

@interface CAKAlbumViewModelObserver : NSObject <CAKAlbumViewModelObserverProtocol>

@property (retain, nonatomic) NSMapTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllObserver;
- (void)assetSelected:(id)a0 fromViewModel:(id)a1 resourceType:(unsigned long long)a2;
- (void)assetUnSelected:(id)a0 fromViewModel:(id)a1 resourceType:(unsigned long long)a2;
- (void)updateSelectedAssets:(id)a0 fromViewModel:(id)a1 resourceType:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;

@end
