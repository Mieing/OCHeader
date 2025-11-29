@class NSMutableArray;

@interface FrontStickerEffectAdapter : WeEffectBaseAdapter

@property (retain, nonatomic) NSMutableArray *stickerArr;

+ (id)weeffectType;

- (void)load;
- (void)onJsonWriteDoneWithPath:(id)a0;
- (void)onZipFetchDoneWithPath:(id)a0;
- (id)generateJsonDic;
- (void).cxx_destruct;

@end
