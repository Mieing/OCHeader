@interface ACCChapterKnowledgeManager : NSObject

+ (BOOL)isHalfAlphabet:(id)a0;
+ (double)heightForTextString:(id)a0 font:(id)a1 limitedWidth:(double)a2 limitedLines:(unsigned long long)a3;
+ (double)textInputCount:(id)a0;
+ (void)trimTextView:(id)a0 toMaxCount:(long long)a1;
+ (id)sharedInstance;

- (BOOL)hasChapterKnowledge:(id)a0;

@end
