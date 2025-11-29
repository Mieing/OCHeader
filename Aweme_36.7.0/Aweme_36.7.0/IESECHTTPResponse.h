@class TTHttpResponse, NSError;

@interface IESECHTTPResponse : NSObject

@property (retain, nonatomic) TTHttpResponse *tt_HTTPResponse;
@property (retain, nonatomic) id JSONObj;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
