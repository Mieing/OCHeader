@class NSRegularExpression, NSMutableCharacterSet;

@interface AWEIMFTSKeywordProcessor : NSObject

@property (retain, nonatomic) NSRegularExpression *chineseRex;
@property (retain, nonatomic) NSMutableCharacterSet *specialCharacterSet;

+ (id)generateSpaceSplittedStringOf:(id)a0;

- (id)getSpaceFuzzySearchKeyword:(id)a0;
- (BOOL)p_needSearchFirstLetter:(id)a0;
- (BOOL)p_needAppendAsterisk:(id)a0;
- (BOOL)p_needSearchPinyin:(id)a0;
- (BOOL)p_needIgnoreWordCase;
- (id)generateSearchKeywordsFromKeyword:(id)a0;
- (BOOL)needAppendAsterisk:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
