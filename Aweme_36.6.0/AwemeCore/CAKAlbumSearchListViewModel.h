@class CAKAlbumSearchFeatureConfig, NSArray;

@interface CAKAlbumSearchListViewModel : NSObject

@property (retain, nonatomic) CAKAlbumSearchFeatureConfig *searchFeatureConfig;
@property (copy, nonatomic) NSArray *initialSelectedAssets;

- (id)containersInArray:(id)a0 withAssetIdentifier:(id)a1;
- (id)initWithSearchFeatureConfig:(id)a0;
- (void)updateEnterSearchPageInitialSelectedAssets:(id)a0;
- (BOOL)hasAddedAssetWithCurrentSelectedAssets:(id)a0;
- (void)parseQueryIfNeeded:(id)a0 parser:(unsigned long long)a1;
- (void).cxx_destruct;

@end
