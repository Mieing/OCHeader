@class NSString, NSDictionary;

@interface IESECBaseRequestParams : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *method;
@property (retain, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL forceUseForm;

+ (id)ttnetURLWithString:(id)a0;
+ (id)percentEscapedQueryStringKeyFromString:(id)a0;
+ (id)percentEscapedQueryStringValueFromString:(id)a0;
+ (id)queryStringWithParameters:(id)a0;
+ (id)concatenateURL:(id)a0 params:(id)a1;

- (id)ecHybridRequestTransformConfig;
- (id)initWithUrl:(id)a0 method:(id)a1 headers:(id)a2 params:(id)a3;
- (id)transformIfNeeded;
- (void).cxx_destruct;

@end
