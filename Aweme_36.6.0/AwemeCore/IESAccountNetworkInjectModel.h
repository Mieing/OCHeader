@class TTHttpResponse, NSString, NSDictionary, NSError;

@interface IESAccountNetworkInjectModel : NSObject

@property (copy, nonatomic) NSString *URL;
@property (copy, nonatomic) NSDictionary *originalParams;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) TTHttpResponse *response;

- (void).cxx_destruct;

@end
