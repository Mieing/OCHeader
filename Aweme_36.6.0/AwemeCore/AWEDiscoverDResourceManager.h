@interface AWEDiscoverDResourceManager : NSObject

+ (id)loadFontFromData:(id)a0 size:(double)a1 completion:(id /* block */)a2;
+ (id)dataForPath:(id)a0 channel:(id)a1;
+ (id)imageForPath:(id)a0 channel:(id)a1;
+ (id)onlineFontName:(id)a0 FontForSize:(double)a1 defaultFont:(id)a2;
+ (BOOL)hasOnlineFont:(id)a0;

@end
