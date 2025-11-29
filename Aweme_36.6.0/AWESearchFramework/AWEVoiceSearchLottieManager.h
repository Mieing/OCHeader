@class NSString, NSMutableDictionary;

@interface AWEVoiceSearchLottieManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *statusLottieViewDict;
@property (retain, nonatomic) NSMutableDictionary *othersLottieViewDict;
@property (copy, nonatomic) NSString *lottieFilePath;
@property (copy, nonatomic) NSString *accessKey;
@property (nonatomic) BOOL lottieIsDownload;
@property (nonatomic) BOOL lottieIsDownloading;
@property (nonatomic) double keyboardHeight;

+ (void)updateKeyboardHeight:(double)a0;
+ (BOOL)checkLottieIsDownLoad;
+ (void)stopWithLottieType:(unsigned long long)a0;
+ (void)playWithLottieType:(unsigned long long)a0 isLoop:(BOOL)a1 onView:(id)a2;
+ (void)playWithLottieType:(unsigned long long)a0 isLoop:(BOOL)a1 onView:(id)a2 completeBlcok:(id /* block */)a3;
+ (void)playWithLottieType:(unsigned long long)a0 isLoop:(BOOL)a1 isReverse:(BOOL)a2 onView:(id)a3 completeBlcok:(id /* block */)a4;
+ (void)zoomViewWithLottieType:(unsigned long long)a0 firstSegmentTime:(double)a1 secondSegmentTime:(double)a2 startScale:(double)a3 midScale:(double)a4 endScale:(double)a5 complete:(id /* block */)a6;
+ (void)stopAllStatusLottieAnimation;
+ (void)rotateRefreshViewWithRepeatCount:(double)a0 onView:(id)a1;
+ (void)stopRotateAnimating;
+ (void)lottieResourceDownloadWithBlock:(id /* block */)a0;
+ (double)KeyboardHeight;
+ (void)clearCache;
+ (id)sharedInstance;

- (void)updateKeyboardHeight:(double)a0;
- (BOOL)checkLottieIsDownLoad;
- (void)stopWithLottieType:(unsigned long long)a0;
- (void)playWithLottieType:(unsigned long long)a0 isLoop:(BOOL)a1 isReverse:(BOOL)a2 onView:(id)a3 completeBlcok:(id /* block */)a4;
- (void)zoomViewWithLottieType:(unsigned long long)a0 firstSegmentTime:(double)a1 secondSegmentTime:(double)a2 startScale:(double)a3 midScale:(double)a4 endScale:(double)a5 complete:(id /* block */)a6;
- (void)stopAllStatusLottieAnimation;
- (void)rotateRefreshViewWithRepeatCount:(double)a0 onView:(id)a1;
- (void)stopRotateAnimating;
- (void)lottieResourceDownloadWithBlock:(id /* block */)a0;
- (double)KeyboardHeight;
- (id)getLottieNameWithType:(unsigned long long)a0;
- (id)microphoneLottieKeyWithType:(unsigned long long)a0;
- (double)getCurrentBottomSpace:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearCache;

@end
