@class PHFetchResult, NSMutableArray;

@interface MMAlbumFetchResult : NSObject

@property (retain, nonatomic) PHFetchResult *systemFetchResult;
@property (nonatomic) BOOL onlyShowAssetWithLocation;
@property (retain, nonatomic) NSMutableArray *prefetchAssets;

+ (id)fetchResult:(id)a0 locationFilter:(BOOL)a1;

- (void)updateFetchResults;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)lastObject;
- (void).cxx_destruct;

@end
