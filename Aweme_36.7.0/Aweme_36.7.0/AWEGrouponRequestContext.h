@class AWEGrouponResponse, NSString, NSDictionary, AWEGrouponListDataResponseTrackModel, AWEGrouponListDataResponse, NSError, TTHttpResponse;

@interface AWEGrouponRequestContext : NSObject

@property (nonatomic) long long pullType;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (copy, nonatomic) NSDictionary *utParams;
@property (retain, nonatomic) AWEGrouponListDataResponseTrackModel *trackModel;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEGrouponListDataResponse *model;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long pageType;
@property (nonatomic) double reqStartTime;
@property (nonatomic) long long monitorPhase;
@property (retain, nonatomic) AWEGrouponListDataResponse *resp;
@property (retain, nonatomic) AWEGrouponResponse *grouponResponse;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) long long statusCode;
@property (retain, nonatomic) TTHttpResponse *tt_httpResponse;

- (void).cxx_destruct;

@end
