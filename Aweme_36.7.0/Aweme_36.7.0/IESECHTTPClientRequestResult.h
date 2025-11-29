@class NSError, NSString, IESECHTTPRequest;

@interface IESECHTTPClientRequestResult : NSObject

@property (nonatomic) long long iesec_currentChunkIndex;
@property (retain, nonatomic) IESECHTTPRequest *request;
@property (retain, nonatomic) id model;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSError *mappingError;
@property (retain, nonatomic) NSString *logID;
@property (retain, nonatomic) NSString *ttStable;

- (void).cxx_destruct;

@end
