@class NSMutableArray;

@interface FinderSubtitleSentence : WXPBGeneratedMessage

@property (nonatomic) unsigned long long beginMs;
@property (nonatomic) unsigned long long endMs;
@property (retain, nonatomic) NSMutableArray *sentenceByLanguage;

+ (void)initialize;

@end
