@class NSMutableDictionary, NSTimer, UIView, NSMutableArray;
@protocol BDXKitViewProtocol;

@interface AWESearchSynthesisNovelPreloadManager : NSObject

@property (nonatomic) BOOL isPreloading;
@property (retain, nonatomic) NSMutableArray *preloadUrlsQueue;
@property (retain, nonatomic) UIView<BDXKitViewProtocol> *preloadView;
@property (retain, nonatomic) NSTimer *preloadTimer;
@property (retain, nonatomic) NSMutableDictionary *preloadDataDict;

+ (BOOL)openNovelPreloadOptimize;
+ (id)sharedManager;

- (BOOL)hasPreloadedUrl:(id)a0;
- (void)savePreTranscodeData:(id)a0 type:(id)a1 url:(id)a2 transcodeExtra:(id)a3;
- (void)preloadNextUrl;
- (void)preloadWithUrl:(id)a0;
- (id)getPreTranscodeDataWithUrl:(id)a0;
- (void)cancelPreloadUrl:(id)a0;
- (void).cxx_destruct;

@end
