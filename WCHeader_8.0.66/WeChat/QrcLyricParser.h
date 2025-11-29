@class Lyric;

@interface QrcLyricParser : NSObject

@property (retain, nonatomic) Lyric *qrcLyric;
@property (copy, nonatomic) id /* block */ sentenceFilterBlock;

+ (id)getSentencesWithQrcFilePath:(id)a0;
+ (BOOL)hasValidSentencesWithQrcFilePath:(id)a0;

- (void)loadFile:(id)a0;
- (void)loadFile:(id)a0 error:(id *)a1;
- (void)loadFile:(id)a0 isTolerant:(BOOL)a1 error:(id *)a2;
- (void)loadStr:(id)a0;
- (void)loadStr:(id)a0 error:(id *)a1;
- (void)loadStr:(id)a0 isTolerant:(BOOL)a1 error:(id *)a2;
- (void)parseLyricContent:(id)a0;
- (id)newlineStr:(id)a0;
- (int)lengthOfNewlineStr:(id)a0;
- (void)parseSentence:(id)a0;
- (void)parseLineToSentence:(id)a0;
- (void)parseLineToSentenceFromQQMusic:(id)a0;
- (void)splitBySpaceCharacter;
- (void)fillEmptySegmentsIfNeed;
- (BOOL)_isDigitString:(id)a0;
- (void).cxx_destruct;

@end
