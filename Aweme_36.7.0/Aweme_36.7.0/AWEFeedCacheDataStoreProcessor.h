@class NSString, AWEFeedCacheDataDepository;

@interface AWEFeedCacheDataStoreProcessor : NSObject <AWEFeedCacheProcessor>

@property (retain, nonatomic) AWEFeedCacheDataDepository *dataDepository;
@property (copy, nonatomic) NSString *sourceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
