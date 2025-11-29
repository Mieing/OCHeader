@class NSString, AWESearchSugResponseModel;

@interface AWESearchAIGCSugData : NSObject

@property (nonatomic) double sugTimeInterval;
@property (copy, nonatomic) NSString *sugWord;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) BOOL isLocalResponse;
@property (retain, nonatomic) AWESearchSugResponseModel *responseModel;
@property (copy, nonatomic) NSString *requestLogID;

- (void).cxx_destruct;

@end
