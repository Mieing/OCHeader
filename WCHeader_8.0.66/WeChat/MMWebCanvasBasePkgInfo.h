@class NSDictionary;

@interface MMWebCanvasBasePkgInfo : MMWebJsBasePkgInfo

@property (retain, nonatomic) NSDictionary *dicContextMetaInfo;
@property (retain, nonatomic) NSDictionary *dicRenderMetaInfo;

+ (id)pkgInfoFromFilePath:(id)a0;

- (void).cxx_destruct;

@end
