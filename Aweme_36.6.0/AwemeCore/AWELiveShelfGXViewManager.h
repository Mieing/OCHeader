@class NSMutableDictionary;

@interface AWELiveShelfGXViewManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *GXViewPool;
@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (nonatomic) BOOL isInRoom;

+ (id)shareManager;

- (void)stopRunLoopObserver;
- (void)stopPreload;
- (void)preRenderGXViewWithItem:(id)a0;
- (void)startPreload;
- (id)keyWithId:(id)a0 bizId:(id)a1 version:(id)a2;
- (id)popViewWithKey:(id)a0;
- (id)createGXViewWithId:(id)a0 bizId:(id)a1 version:(id)a2;
- (void)storeView:(id)a0 forKey:(id)a1;
- (id)fetchGXViewWithId:(id)a0 bizId:(id)a1 version:(id)a2;
- (unsigned long long)viewCountWithKey:(id)a0;
- (void)setCanPreload:(BOOL)a0;
- (void)releaseGXView:(id)a0 withId:(id)a1 bizId:(id)a2 version:(id)a3;
- (id)fetchGXViewWithId:(id)a0 bizId:(id)a1 version:(id)a2 item:(id)a3;
- (void).cxx_destruct;

@end
