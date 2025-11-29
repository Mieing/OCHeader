@class NSError, BDPNetworkHTTPResponse;

@interface BDPAppPagePrefetchDataModel : NSObject

@property (nonatomic) long long state;
@property (nonatomic) double successTimeStamp;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) BDPNetworkHTTPResponse *response;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;
- (id)description;

@end
