@class NSString, NSDictionary;

@interface AWEFeedLiveTabPreloadModel : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) long long scene;
@property (nonatomic) long long loadType;
@property (copy, nonatomic) NSString *tabName;
@property (nonatomic) long long tabId;
@property (copy, nonatomic) NSString *tabEvent;
@property (retain, nonatomic) NSDictionary *requestParams;

- (void).cxx_destruct;

@end
