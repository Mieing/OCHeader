@class NSError, NSDictionary, NSNumber;

@interface PuzzleNetworkResponseModel : NSObject

@property (retain, nonatomic) id jsonObj;
@property (retain, nonatomic) id binaryData;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *responseHeaders;
@property (nonatomic) long long httpCode;
@property (readonly, nonatomic) NSNumber *statusCode;
@property (readonly, nonatomic) NSDictionary *extra;
@property (readonly, nonatomic) id data;

- (void).cxx_destruct;

@end
