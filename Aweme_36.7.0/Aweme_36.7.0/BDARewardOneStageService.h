@class NSMutableDictionary;

@interface BDARewardOneStageService : NSObject

@property (retain, nonatomic) NSMutableDictionary *oneStageDictionary;

+ (id)oneStageContextWithItem:(id)a0;
+ (id)sharedInstance;

- (void)saveOneStageInfoWithItem:(id)a0;
- (void)saveOneStageInfoWithItem:(id)a0 forKey:(id)a1;
- (id)oneStageInfoForKey:(id)a0;
- (void)removeOneStageInfoForKey:(id)a0;
- (void)removeAllOneStageInfos;
- (void).cxx_destruct;

@end
