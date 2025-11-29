@class NSString;

@interface QOverseaProvider : NSObject

@property (copy, nonatomic) NSString *name;

- (id)URLForTilePath:(struct { long long x0; long long x1; long long x2; long long x3; double x4; })a0;
- (void)onStyleChanged:(unsigned long long)a0;
- (id)logoImage;
- (void)clearCache;
- (void).cxx_destruct;

@end
