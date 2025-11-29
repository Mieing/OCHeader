@class NSData, NSString, NSDictionary;

@interface MABaseMapRequestReformer : AMapRESTRequestReformer {
    NSString *_sourceURL;
    NSDictionary *_parameters;
}

@property (retain, nonatomic) NSData *dataToPost;
@property (nonatomic) BOOL isIndoorMap;

- (id)v6Url;
- (id)initWithSourceURL:(id)a0 andParameters:(id)a1;
- (void).cxx_destruct;
- (id)method;
- (id)parameters;
- (id)HTTPHeaders;
- (id)url;
- (id)postData;

@end
