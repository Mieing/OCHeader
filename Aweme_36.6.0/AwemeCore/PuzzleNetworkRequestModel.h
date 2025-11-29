@class NSString, NSDictionary;

@interface PuzzleNetworkRequestModel : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *queryParameters;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSDictionary *data;
@property (nonatomic) BOOL requestForJSON;
@property (nonatomic) BOOL requestTypePB;
@property (nonatomic) BOOL requestForBinary;
@property (nonatomic) BOOL needCommonParams;

- (void).cxx_destruct;

@end
