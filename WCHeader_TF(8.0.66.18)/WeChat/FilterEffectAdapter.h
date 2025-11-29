@class NSNumber;

@interface FilterEffectAdapter : WeEffectBaseAdapter

@property (retain, nonatomic) NSNumber *alpha;

+ (id)weeffectType;

- (void)load;
- (void)onJsonWriteDoneWithPath:(id)a0;
- (void)onImageFetchDone:(BOOL)a0;
- (id)generateJsonDic;
- (id)getFilterDirectory;
- (void).cxx_destruct;

@end
