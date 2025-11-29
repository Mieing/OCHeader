@class NSURL;

@interface MACloudMapLogoRequestReformer : AMapRequestReformer {
    NSURL *_url;
    NSURL *_ipv6Url;
}

- (id)v6Url;
- (id)initWithURL:(id)a0 ipv6Url:(id)a1;
- (void).cxx_destruct;
- (id)url;

@end
