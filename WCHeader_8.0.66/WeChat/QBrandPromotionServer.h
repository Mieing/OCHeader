@class NSRecursiveLock, NSMutableDictionary, QMapLRUCache, NSMutableSet, QBrandPromotionContext, NSString;
@protocol QBrandPromotionImageDownloader;

@interface QBrandPromotionServer : NSObject <QBrandPromotionGridModelDelegate, QMapLRUCacheDelegate>

@property (retain, nonatomic) QBrandPromotionContext *brandPromotionContext;
@property (retain, nonatomic) QMapLRUCache *gridCache;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) NSMutableDictionary *viewItemMap;
@property (retain, nonatomic) NSMutableSet *latestVisibleGridModels;
@property (retain, nonatomic) id<QBrandPromotionImageDownloader> imageDownloader;
@property (nonatomic) struct { struct { double x; double y; } origin; struct { double width; double height; } size; } latestVisibleRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithContext:(id)a0;
- (void)setup;
- (void)updateConfig:(id)a0;
- (void)updateVisiableRegion:(BOOL)a0;
- (void)destroy;
- (id)mediator;
- (id)promoteConfig;
- (void)updateVisiableGridModels:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 currenOverScale:(unsigned int)a1 force:(BOOL)a2;
- (void)clearMarkersWithGridModel:(id)a0;
- (void)clearMarkerWithViewItem:(id)a0;
- (id)createGridModelsInRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0 scale:(unsigned int)a1;
- (void)brandPromotionGridModel:(id)a0 updateItems:(id)a1;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void).cxx_destruct;

@end
