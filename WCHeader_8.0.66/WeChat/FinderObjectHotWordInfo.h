@class NSData, FinderSearchHotWord, NSMutableArray;

@interface FinderObjectHotWordInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderSearchHotWord *objectHotWord;
@property (retain, nonatomic) NSMutableArray *hotWordList;
@property (retain, nonatomic) NSData *objHotwordInfoBuff;

+ (void)initialize;

- (void)setObjHotwordInfoBuff:(id)a0;
- (id)objHotwordInfoBuff;
- (void)setHotWordList:(id)a0;
- (id)hotWordList;
- (void)setObjectHotWord:(id)a0;
- (id)objectHotWord;

@end
