@class YYDiskCache, NSMutableSet;

@interface SLIOnlineFontManager : NSObject

@property (retain, nonatomic) YYDiskCache *diskCache;
@property (retain, nonatomic) NSMutableSet *failedFontURLs;

+ (id)shared;

- (id)registerFontWithData:(id)a0;
- (id)getOnlineFontWithGeckoURL:(id)a0 size:(double)a1;
- (void).cxx_destruct;

@end
