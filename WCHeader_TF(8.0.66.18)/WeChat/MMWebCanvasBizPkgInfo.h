@class NSDictionary;

@interface MMWebCanvasBizPkgInfo : MMWebJsBasePkgInfo

@property (retain, nonatomic) NSDictionary *dicClientMetaInfo;

+ (id)pkgMetaInfoKey;
+ (id)pkgInfoFromFilePath:(id)a0;

- (id)getBizJsWithType:(id)a0;
- (long long)minBasePkgVersionRequired;
- (void).cxx_destruct;

@end
