@class YYMemoryCache;

@interface IESECWebImageUrlCache : NSObject

@property (retain, nonatomic) YYMemoryCache *cache;
@property (retain, nonatomic) YYMemoryCache *previewCache;
@property (retain, nonatomic) YYMemoryCache *requestFlag;

+ (id)sharedInstance;

- (id)remakeUrlForKey:(id)a0;
- (void)setRemakeUrl:(id)a0 forKey:(id)a1;
- (BOOL)didRequestUrl:(id)a0;
- (void)setRequestUrlFlag:(id)a0;
- (void)setPreviewUrl:(id)a0 forKey:(id)a1;
- (id)previewUrlForKey:(id)a0;
- (void).cxx_destruct;

@end
