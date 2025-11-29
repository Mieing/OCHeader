@class _TtC7WCUIKit32SwiftImageLoadCacheHitAccountant;

@interface WCUIKit.SwiftImageLoadCacheHitAccountant : NSObject {
    void /* unknown type, empty encoding */ mutex;
    void /* unknown type, empty encoding */ module;
    void /* unknown type, empty encoding */ netRequestBeginCount;
    void /* unknown type, empty encoding */ memoryHitCount;
    void /* unknown type, empty encoding */ diskHitCount;
    void /* unknown type, empty encoding */ bitmapHitCount;
    void /* unknown type, empty encoding */ dowloadHitCount;
}

@property (class, nonatomic, readonly) _TtC7WCUIKit32SwiftImageLoadCacheHitAccountant *ultram_MMImageLoader;
@property (class, nonatomic, readonly) _TtC7WCUIKit32SwiftImageLoadCacheHitAccountant *mmImageLoader;
@property (class, nonatomic, readonly) _TtC7WCUIKit32SwiftImageLoadCacheHitAccountant *finder;

- (void)onLoadImageWith:(long long)a0;
- (void)onFetchImageFrom:(long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
