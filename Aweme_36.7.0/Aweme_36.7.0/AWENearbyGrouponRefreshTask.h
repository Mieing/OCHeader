@class AWENearbyGrouponTransform, NSSet, NSDictionary, NSString, TTHttpResponse, AWENearbyGrouponResponse, NSNumber;

@interface AWENearbyGrouponRefreshTask : NSObject

@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AWENearbyGrouponResponse *currentResponse;
@property (copy, nonatomic) NSNumber *hasMoreNumber;
@property (copy, nonatomic) NSSet *freshComponentNodeTagSet;
@property (nonatomic) double requestEndTime;
@property (retain, nonatomic) AWENearbyGrouponTransform *dataTransfrom;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) TTHttpResponse *tt_httpResponse;

- (void)refreshGrouponWithCurrentResponse:(id)a0 requestParams:(id)a1 completion:(id /* block */)a2;
- (void)didReceiveNetworkResponse:(id)a0 requestParams:(id)a1 error:(id)a2;
- (void)invokeCompletionWithError:(id)a0 response:(id)a1;
- (void)didFinishParseDataWithPageViewModel:(id)a0 error:(id)a1;
- (id)fetchFreshComponentNodeTagWithPageViewModel:(id)a0;
- (void)transformPageViewModel:(id)a0;
- (id)hasMoreConfig;
- (void).cxx_destruct;
- (id)init;

@end
