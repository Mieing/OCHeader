@class NSDictionary, NSMutableArray;

@interface TwoDStickerEffectAdapter : WeEffectBaseAdapter

@property (retain, nonatomic) NSMutableArray *stickerArr;
@property (retain, nonatomic) NSDictionary *templateTransSet;

+ (id)weeffectType;

- (void)load;
- (void)onJsonWriteDoneWithPath:(id)a0;
- (void)onZipFetchDoneWithPath:(id)a0;
- (id)generateJsonDic;
- (void).cxx_destruct;

@end
