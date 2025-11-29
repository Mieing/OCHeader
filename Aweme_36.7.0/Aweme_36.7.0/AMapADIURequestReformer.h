@class NSString;

@interface AMapADIURequestReformer : AMapAOSRequestReformer

@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *diu2;
@property (copy, nonatomic) NSString *diu3;

- (id)v6Url;
- (id)assembledURL:(id)a0;
- (id)v6BaseURL;
- (void).cxx_destruct;
- (id)init;
- (id)method;
- (id)baseURL;
- (id)parameters;
- (id)url;
- (id)postData;

@end
