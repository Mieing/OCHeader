@class NSMutableDictionary;

@interface IESCombineFeatures : NSObject

@property (retain, nonatomic) NSMutableDictionary *groupStorageDict;
@property (nonatomic) BOOL needTrack;
@property (nonatomic) BOOL lastUpdateCombineTrackInfoTimeMs;

- (void)updateCombineFeaturesWithScene:(id)a0 config:(id)a1 model:(id)a2 isNew:(BOOL)a3 isForce:(BOOL)a4;
- (BOOL)fillFeatures:(id)a0 withConfig:(id)a1 inputData:(id)a2;
- (id)getGroupStorageWithScene:(id)a0;
- (id)getLastRangeList:(id)a0 rangeCount:(long long)a1 excludeThis:(BOOL)a2;
- (void)updateStorageWithScene:(id)a0 features:(id)a1 isNew:(BOOL)a2 isForce:(BOOL)a3;
- (void).cxx_destruct;

@end
