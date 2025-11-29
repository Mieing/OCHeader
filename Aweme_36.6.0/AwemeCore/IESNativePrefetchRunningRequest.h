@class IESPrefetchJSNetworkRequestModel, NSMutableArray;

@interface IESNativePrefetchRunningRequest : NSObject

@property (retain, nonatomic) IESPrefetchJSNetworkRequestModel *request;
@property (nonatomic) long long expire;
@property (retain, nonatomic) NSMutableArray *callbacks;

- (void).cxx_destruct;
- (id)init;

@end
