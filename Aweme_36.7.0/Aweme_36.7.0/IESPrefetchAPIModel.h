@class IESPrefetchJSNetworkRequestModel;

@interface IESPrefetchAPIModel : NSObject

@property (retain, nonatomic) IESPrefetchJSNetworkRequestModel *request;
@property (nonatomic) long long expire;
@property (nonatomic) BOOL isPure;

- (void).cxx_destruct;

@end
