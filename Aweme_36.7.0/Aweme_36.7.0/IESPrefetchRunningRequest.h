@class IESPrefetchJSNetworkRequestModel, NSMutableArray;

@interface IESPrefetchRunningRequest : NSObject

@property (retain, nonatomic) IESPrefetchJSNetworkRequestModel *request;
@property (nonatomic) long long expire;
@property (retain, nonatomic) NSMutableArray *callbacks;
@property (nonatomic) BOOL isPure;
@property (nonatomic) BOOL ignorePureCache;

- (void).cxx_destruct;
- (id)init;

@end
