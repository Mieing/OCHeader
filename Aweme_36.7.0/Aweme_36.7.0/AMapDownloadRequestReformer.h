@class NSString;

@interface AMapDownloadRequestReformer : AMapRequestReformer

@property (copy, nonatomic) NSString *urlString;
@property (nonatomic) long long existedDataLength;
@property (copy, nonatomic) NSString *userAgent;

- (id)initReformerWithURLString:(id)a0 existedDataLength:(long long)a1;
- (void).cxx_destruct;
- (id)HTTPHeaders;
- (id)url;

@end
