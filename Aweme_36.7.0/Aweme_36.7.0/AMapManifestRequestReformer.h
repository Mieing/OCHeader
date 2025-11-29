@class NSDictionary, NSString;

@interface AMapManifestRequestReformer : AMapRESTRequestReformer {
    NSDictionary *_parameters;
    NSString *_actionPath;
}

- (id)URLPath;
- (id)initWithParameters:(id)a0 action:(id)a1;
- (void).cxx_destruct;
- (id)baseURL;
- (id)parameters;

@end
