@class NSString;

@interface MAOfflineRequestReformer : AMapRequestReformer {
    NSString *baseURL;
}

@property (retain, nonatomic) NSString *urlString;
@property (readonly, nonatomic) unsigned long long cachePolicy;

+ (id)reformerWithURLString:(id)a0 existedDataLength:(long long)a1;

- (id)v6Url;
- (id)initReformerWithURLString:(id)a0 existedDataLength:(long long)a1;
- (void).cxx_destruct;
- (id)baseURL;
- (id)url;

@end
