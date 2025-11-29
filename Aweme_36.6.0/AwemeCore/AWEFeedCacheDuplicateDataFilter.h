@class NSArray, NSString;

@interface AWEFeedCacheDuplicateDataFilter : NSObject <AWEFeedCacheDataFilter>

@property (retain, nonatomic) NSArray *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFilterWithModel:(id)a0;
- (void).cxx_destruct;

@end
