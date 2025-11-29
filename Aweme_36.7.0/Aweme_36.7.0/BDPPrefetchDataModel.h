@class NSError, BDPNetworkHTTPResponse, NSMutableArray;

@interface BDPPrefetchDataModel : NSObject

@property (nonatomic) long long state;
@property (nonatomic) double successTimeStamp;
@property (retain, nonatomic) id data;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) BDPNetworkHTTPResponse *response;
@property (retain, nonatomic) NSMutableArray *completionBlockList;

- (void).cxx_destruct;
- (id)init;

@end
