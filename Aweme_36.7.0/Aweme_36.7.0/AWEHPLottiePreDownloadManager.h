@class MMKV, NSMutableDictionary;

@interface AWEHPLottiePreDownloadManager : NSObject

@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) NSMutableDictionary *preloadStatusDict;
@property (retain, nonatomic) NSMutableDictionary *preloadFailDict;
@property (retain, nonatomic) NSMutableDictionary *preloadURLsDict;

- (void)updateLottieCacheChanged:(BOOL)a0;
- (void)updateLottieURLsWithParams:(id)a0;
- (void)deleteLottieURLsWithComponentID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)appDidEnterBackground;

@end
