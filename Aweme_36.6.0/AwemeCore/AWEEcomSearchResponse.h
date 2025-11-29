@class NSDictionary, NSString, NSObject;

@interface AWEEcomSearchResponse : NSObject

@property (retain, nonatomic) NSDictionary *rawResponse;
@property (retain, nonatomic) NSObject *parsedResponse;
@property (nonatomic, getter=isResponseV3) BOOL responseV3;
@property (nonatomic) unsigned long long statusCode;
@property (copy, nonatomic) NSString *chunkName;
@property (copy, nonatomic) NSString *chunkSubType;
@property (nonatomic) unsigned long long chunkType;

- (id)initWithReponseV3:(BOOL)a0;
- (void).cxx_destruct;

@end
