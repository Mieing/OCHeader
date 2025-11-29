@class NSString, NSMutableDictionary;

@interface IESLiveMessageUplinkRequestModel : NSObject

@property (nonatomic) long long routeServiceId;
@property (nonatomic) long long serviceId;
@property (retain, nonatomic) NSMutableDictionary *queryParams;
@property (retain, nonatomic) NSMutableDictionary *headers;
@property (copy, nonatomic) NSString *uri;
@property (retain, nonatomic) NSMutableDictionary *customJson;

- (void).cxx_destruct;

@end
