@class NSArray, NSString, NSData, MATraceResponseV4;

@interface MATraceRequest : AMapRESTRequestReformer

@property (retain, nonatomic) NSData *interalPostData;
@property (nonatomic) long long coordType;
@property (retain, nonatomic) NSArray *locationArr;
@property (readonly, nonatomic) NSString *apiKey;
@property (retain, nonatomic) MATraceResponseV4 *reponse;
@property (nonatomic) int tryCount;
@property (copy, nonatomic) id /* block */ processingCallback;
@property (copy, nonatomic) id /* block */ finishCallback;
@property (copy, nonatomic) id /* block */ failedCallback;

- (void).cxx_destruct;
- (id)method;
- (id)HTTPHeaders;
- (id)postData;

@end
