@class NSArray, NSDictionary, NSMutableDictionary;

@interface OIDURLQueryComponent : NSObject {
    NSMutableDictionary *_parameters;
}

@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

+ (id)URLParamValueAllowedCharacters;

- (void)addParameter:(id)a0 value:(id)a1;
- (id)URLByReplacingQueryInURL:(id)a0;
- (id)URLEncodedParameters;
- (id)percentEncodedQueryString;
- (id)valuesForParameter:(id)a0;
- (void).cxx_destruct;
- (id)queryItems;
- (id)description;
- (id)initWithURL:(id)a0;
- (id)init;
- (void)addParameters:(id)a0;

@end
