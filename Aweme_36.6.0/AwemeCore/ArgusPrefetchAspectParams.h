@class NSURL, NSString;

@interface ArgusPrefetchAspectParams : ArgusBaseAsepctParams

@property (retain, nonatomic) NSURL *prefetchPageUrl;
@property (copy, nonatomic) NSString *prefetchPageUrlString;
@property (nonatomic) long long prefetchType;
@property (readonly, nonatomic) BOOL isAbnormalHost;
@property (retain, nonatomic) NSURL *prefetchPageSchema;

- (id)toMonitorDict;
- (id)obtainPageUrl:(id)a0;
- (void).cxx_destruct;

@end
