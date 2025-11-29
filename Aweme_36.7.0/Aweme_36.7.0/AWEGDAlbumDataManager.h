@class NSMutableDictionary;

@interface AWEGDAlbumDataManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *albumDataProcessors;

+ (id)sharedInstance;

- (void)setupAlbumDataProcessor:(id)a0 productID:(id)a1 poiID:(id)a2 backendType:(id)a3;
- (id)albumDataProcessor:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
