@class YYDiskCache, NSMutableArray, NSString;

@interface AWEAwemeViewedManager : NSObject <AWEAwemeViewedManagerProtocol>

@property (retain, nonatomic) NSMutableArray *viewerListArray;
@property (retain, nonatomic) NSMutableArray *viewerListArrayV2;
@property (retain, nonatomic) YYDiskCache *diskCache;
@property (nonatomic) BOOL afterSettingsChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewedCache;
+ (id)shareInstance;

- (id)dataControllerWithAwemeID:(id)a0;
- (void)removeAllData;
- (id)dataControllerWithAwemeIDV2:(id)a0;
- (id)dataControllerWithAwemeModel:(id)a0;
- (void)updateViewerListArrayV2:(id)a0;
- (void)updateViewerListArray:(id)a0;
- (void)updateAfterSettingsChange;
- (void)setViewerCacheModel:(id)a0 withAwemeID:(id)a1;
- (id)getViewerCacheModelWithAwemeID:(id)a0;
- (void)setViewerCacheModel:(id)a0 withAwemeID:(id)a1 enableMemoryCache:(BOOL)a2;
- (unsigned long long)totalCostSize;
- (id)getViewerCacheModelWithAwemeID:(id)a0 enableMemoryCache:(BOOL)a1;
- (void).cxx_destruct;

@end
