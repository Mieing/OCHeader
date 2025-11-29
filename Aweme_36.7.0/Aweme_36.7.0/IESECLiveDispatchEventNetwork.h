@class NSString, NSDictionary;

@interface IESECLiveDispatchEventNetwork : IESECLiveDispatchEventBase

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSDictionary *requestParams;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *logID;
@property (copy, nonatomic) NSDictionary *data;
@property (retain, nonatomic) id responseModel;
@property (retain, nonatomic) NSDictionary *apiMonitorParams;

- (void)buildNodeWithMonitorParams:(id)a0;
- (void).cxx_destruct;
- (long long)type;
- (id)eventName;

@end
