@class NSDictionary, NSString;

@interface MAEnInlandMapTileOverlayRequestReformer : AMapRESTRequestReformer {
    NSDictionary *_parameter;
    NSString *_randomBaseURL;
}

- (id)URLPath;
- (id)v6BaseURL;
- (id)initWithTileOverlayPath:(struct MATileOverlayPath { long long x0; long long x1; long long x2; double x3; long long x4; long long x5; })a0 language:(id)a1;
- (void).cxx_destruct;
- (id)method;
- (id)baseURL;
- (id)parameters;
- (id)HTTPHeaders;

@end
