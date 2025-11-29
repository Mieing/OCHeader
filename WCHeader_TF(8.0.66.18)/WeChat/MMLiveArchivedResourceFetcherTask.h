@class NSString;

@interface MMLiveArchivedResourceFetcherTask : MMLiveResourceFetcherTask

@property (retain, nonatomic) NSString *unarchiveDestinationPath;
@property (retain, nonatomic) NSString *manifestPath;

- (id)initWithResourceUri:(id)a0 cachingPath:(id)a1 unarchiveDestinationPath:(id)a2;
- (id)pinnedPaths;
- (void).cxx_destruct;

@end
