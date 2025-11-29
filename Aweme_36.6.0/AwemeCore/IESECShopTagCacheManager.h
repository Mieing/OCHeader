@class NSCache;

@interface IESECShopTagCacheManager : NSObject

@property (retain, nonatomic) NSCache *textWidthCache;

+ (id)sharedInstance;

- (double)getWidthWithText:(id)a0 font:(id)a1;
- (void).cxx_destruct;

@end
