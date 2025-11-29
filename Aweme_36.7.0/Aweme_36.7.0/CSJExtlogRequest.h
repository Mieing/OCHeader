@class NSString;

@interface CSJExtlogRequest : CSJAdNetworkRequest

@property (copy, nonatomic) NSString *applogBaseUrl;
@property (nonatomic) BOOL isV3Data;

- (id)requestHeaderFieldValueDictionary;
- (id)generatedHeaderField;
- (void).cxx_destruct;
- (id)baseUrl;

@end
