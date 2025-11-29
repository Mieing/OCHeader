@class NSString, NSDictionary, NSMutableArray;
@protocol AWEFeedCacheDataFilter;

@interface AWEFeedCacheFeedRequestProcessor : NSObject <AWEFeedCacheProcessor>

@property (copy, nonatomic) NSString *tag;
@property (nonatomic) long long count;
@property (nonatomic) long long pullType;
@property (nonatomic) long long maxRetryCount;
@property (nonatomic) long long requestTimes;
@property (nonatomic) long long fetchCount;
@property (nonatomic) long long awemeType;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) id<AWEFeedCacheDataFilter> feedFilter;
@property (retain, nonatomic) NSMutableArray *videosArray;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL forbiddenDurThisSession;
@property (nonatomic) BOOL forceRequestTrack;
@property (nonatomic) BOOL continuousRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
