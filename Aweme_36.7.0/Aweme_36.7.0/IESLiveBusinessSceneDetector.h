@class NSNumber, NSHashTable;

@interface IESLiveBusinessSceneDetector : NSObject

@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) NSHashTable *observerArray;
@property (retain, nonatomic) NSNumber *contentTypeEnable;
@property (readonly, nonatomic) BOOL enableContentType;

+ (id)sharedInstance;

- (void)pinAction:(long long)a0;
- (void)enterNormalWatchSceneIfNeeded;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)resetScene;
- (id)init;
- (id)contentType;
- (void)removeObserver:(id)a0;

@end
