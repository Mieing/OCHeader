@class BUThreadSafeMutableArray, BUThreadSafeDictionary;

@interface CSJFullLinkTrackInfo : NSObject

@property (retain, nonatomic) BUThreadSafeMutableArray *sequenceArray;
@property (retain, nonatomic) BUThreadSafeDictionary *logDict;

- (void)_pbu_printDetailInfo;
- (void)addWithLogKey:(id)a0 extraDic:(id)a1;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)init;

@end
