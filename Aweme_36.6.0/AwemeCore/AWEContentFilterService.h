@class NSDictionary, NSMutableDictionary;

@interface AWEContentFilterService : NSObject

@property (copy, nonatomic) NSDictionary *sceneFilterConfig;
@property (retain, nonatomic) NSMutableDictionary *recordItemsReasonMap;

+ (id)sharedInstance;

- (BOOL)shouldFilterAwemeModel:(id)a0 scene:(id)a1;
- (BOOL)shouldFilterAwemeWithModelInfo:(id)a0 scene:(id)a1;
- (void)p_parseConfig;
- (void)recordAction:(id)a0 awemeInfo:(id)a1;
- (void)onApplicationEnterBackground;
- (BOOL)enableContentFilterForScene:(id)a0;
- (BOOL)matchVideo:(id)a0 reason:(id)a1 factors:(id)a2;
- (BOOL)matchVideoInfo:(id)a0 reason:(id)a1 factors:(id)a2;
- (id)p_factorValue:(id)a0 forAweme:(id)a1;
- (id)filterAwemeModels:(id)a0 scene:(id)a1;
- (void).cxx_destruct;
- (void)launch;

@end
