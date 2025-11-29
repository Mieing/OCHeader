@class AWENetworkRequest;
@protocol AWEHttpTask;

@interface AWEShowDataInjCacheRequestInfo : NSObject

@property (retain, nonatomic) AWENetworkRequest *request;
@property (retain, nonatomic) id<AWEHttpTask> task;

- (void).cxx_destruct;

@end
