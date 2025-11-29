@class NSArray, AWEVideoPublishViewModel;

@interface AWEVideoCoverRecommendTextDataLoader : NSObject

@property (nonatomic) long long state;
@property (copy, nonatomic) NSArray *titleModelArray;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;

+ (id)keyWithModel:(id)a0;
+ (void)trackWithError:(id)a0 titleCount:(long long)a1;
+ (void)preUploadFrameExtractionWithPublishModel:(id)a0;

- (void)loadDataWithPublishModel:(id)a0;
- (void)saveCacheWithKey:(id)a0 result:(id)a1;
- (void)reloadData;
- (void).cxx_destruct;
- (void)loadData;

@end
