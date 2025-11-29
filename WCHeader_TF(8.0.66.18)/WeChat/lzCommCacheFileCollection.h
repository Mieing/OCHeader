@class NSMutableArray;

@interface lzCommCacheFileCollection : NSObject

@property (retain, nonatomic) NSMutableArray *fileList;
@property (nonatomic) long long totalSize;
@property (retain, nonatomic) NSMutableArray *expfileList;

- (id)init;
- (void)dealloc;
- (id)sortByDate;
- (void).cxx_destruct;

@end
