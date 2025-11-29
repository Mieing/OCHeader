@class NSString, AMapAuthData;

@interface AMapPostDataRequestReformer : AMapRESTRequestReformer

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) AMapAuthData *authData;

- (id)v6Url;
- (id)assembledURL:(id)a0;
- (void).cxx_destruct;
- (id)method;
- (id)parameters;
- (id)url;
- (id)postData;

@end
