@class NSString, NSMutableDictionary, AWEAwemeModel;

@interface AWEProgressThumbnailManager : NSObject <AWEProgressThumbnailManagerProtocol>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSMutableDictionary *engineBigImageDict;
@property (retain, nonatomic) NSMutableDictionary *requestBigThumbDict;
@property (retain, nonatomic) NSMutableDictionary *thumbnailImageDict;
@property (nonatomic) double progressPercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)useCommonThumbnailLogicByClassName:(id)a0;
+ (id)commonThumbnailLogicConfig;
+ (BOOL)useCommonThumbnailLogicByABTest;
+ (BOOL)enableThumbnailCache;
+ (id)sharedInstance;

- (void)handleMemoryWarning:(id)a0;
- (id)getThumbnailImageByModel:(id)a0 engineBigImage:(id)a1 referString:(id)a2 progressPercent:(double)a3;
- (void)getEngineBigImageByModel:(id)a0 progressPercent:(double)a1 referString:(id)a2 completion:(id /* block */)a3;
- (BOOL)isNewThumbnailData;
- (long long)getProgressThumbIndex;
- (void)getEngineBigImageByModel:(id)a0 progressPercent:(double)a1 referString:(id)a2 beforeRequestBlock:(id /* block */)a3 afterRequestBlock:(id /* block */)a4 completion:(id /* block */)a5;
- (void)clearDictsIfNeeded;
- (id)tryGetTargetBigImageFromCache;
- (id)getModelItemIndexKey;
- (void)trackThumbImageCutByBigImage:(id)a0 thumbModel:(id)a1 referString:(id)a2 nowTS:(long long)a3;
- (id)thumbnailImageFromBigImage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
