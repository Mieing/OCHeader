@interface IESGCPColumnListPageInfo : NSObject

@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;
@property (nonatomic) long long size;
@property (nonatomic) BOOL preloadNextPage;

@end
