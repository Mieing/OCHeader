@class NSDictionary, PHFetchResult;

@interface CAKAlbumSearchResult : NSObject

@property (retain, nonatomic) id source;
@property (retain, nonatomic) PHFetchResult *result;
@property (copy, nonatomic) NSDictionary *extra;

- (id)initWithSource:(id)a0 phFetchResult:(id)a1;
- (void).cxx_destruct;

@end
