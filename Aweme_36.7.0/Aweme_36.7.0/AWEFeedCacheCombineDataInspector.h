@class NSString, NSMutableArray;

@interface AWEFeedCacheCombineDataInspector : NSObject <AWEFeedCacheDataInspector>

@property (retain, nonatomic) NSMutableArray *dataInspectors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
