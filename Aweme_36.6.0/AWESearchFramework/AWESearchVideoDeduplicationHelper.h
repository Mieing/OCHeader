@class NSMutableDictionary;

@interface AWESearchVideoDeduplicationHelper : NSObject

@property (retain, nonatomic) NSMutableDictionary *timeAccumulateDict;
@property (retain, nonatomic) NSMutableDictionary *alreadyDeduplicationDict;
@property (retain, nonatomic) NSMutableDictionary *shouldDeduplicationDict;
@property (retain, nonatomic) NSMutableDictionary *alreadyPlayInDetailDict;
@property (retain, nonatomic) NSMutableDictionary *alreadyPlayInResultDict;
@property (nonatomic) long long maxShowIndex;

+ (id)watchedMonitorConfig;

- (BOOL)checkIfCardTypeIsInTarget:(long long)a0 withConfigModel:(id)a1;
- (BOOL)shouldRemoveWithGeneralSearchModel:(id)a0 index:(long long)a1;
- (void)videoHasBeenDeduplicationWithAwemeId:(id)a0;
- (id)findDuplicatVideoIndexsWithAwemeId:(id)a0 configModel:(id)a1 inSearchModels:(id)a2 displayCount:(long long)a3;
- (BOOL)accumulatePlayTime:(id)a0;
- (id)findDuplicatVideoIndexsWithAwemeId:(id)a0 inSearchModels:(id)a1;
- (double)accumulatePlayTime:(double)a0 withIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
