@class NSArray, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface IESECFirstScreenImageMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loadAllQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loadedQueue;
@property (nonatomic) double firstFrameTimestamp;
@property (nonatomic) BOOL isBeforeFirstScreen;
@property (retain, nonatomic) NSMutableSet *sceneTagSet;
@property (copy, nonatomic) NSArray *sceneTagPre;
@property (retain, nonatomic) NSMutableSet *processedURLsDict;
@property (retain, nonatomic) NSMutableSet *succeededURLsDict;
@property (retain, nonatomic) NSMutableDictionary *loadAllDict;
@property (retain, nonatomic) NSMutableDictionary *loadedDict;
@property (retain, nonatomic) NSMutableDictionary *loadFromNetDict;
@property (retain, nonatomic) NSMutableDictionary *loadFromMemoryDict;
@property (retain, nonatomic) NSMutableDictionary *loadFromDiskDict;
@property (retain, nonatomic) NSMutableDictionary *loadFromUnknownDict;
@property (retain, nonatomic) NSMutableSet *otherSceneTag;

+ (id)getFilter;
+ (BOOL)enableFilter;
+ (id)sharedInstance;

- (BOOL)isFirstScreenImage;
- (id)urlStringByAddingFirstScreenParam:(id)a0;
- (BOOL)isFirstScreenImage:(id)a0;
- (BOOL)isFirstScreenImageAndReturnTimeout:(id)a0;
- (id)addFirstScreenImageSuffix:(id)a0 sceneTag:(id)a1;
- (void)addImageLoadSuccessCount:(id)a0 url:(id)a1 from:(long long)a2;
- (double)getFirstScreenRenderDuration:(id)a0;
- (void)trackFirstScreenImageEvent:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setFrameTime:(double)a0;

@end
