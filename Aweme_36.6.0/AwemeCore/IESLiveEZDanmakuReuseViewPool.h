@class NSMutableDictionary;

@interface IESLiveEZDanmakuReuseViewPool : NSObject

@property (retain, nonatomic) NSMutableDictionary *reusableViewsMap;

+ (id)pool;

- (void)poolDrain;
- (void)loadDanmakuViewForSpirit:(id)a0;
- (void)unloadDanmakuViewForSpirit:(id)a0;
- (id)getViewArrayWithSpirit:(id)a0;
- (id)hashKeyForSpirit:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
