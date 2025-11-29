@class NSDictionary, IESECLiveAPIClientRequest, NSError, IESECHTTPRequest, IESECHTTPClientRequestResult;

@interface IESECLiveAPIClientResult : NSObject

@property (retain, nonatomic) IESECLiveAPIClientRequest *request;
@property (retain, nonatomic) id model;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *monitorParams;
@property (retain, nonatomic) IESECHTTPRequest *originRequest;
@property (retain, nonatomic) IESECHTTPClientRequestResult *originResult;

- (void).cxx_destruct;

@end
