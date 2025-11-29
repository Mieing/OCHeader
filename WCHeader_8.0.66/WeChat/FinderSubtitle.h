@class NSMutableArray;

@interface FinderSubtitle : WXPBGeneratedMessage

@property (nonatomic) unsigned int subtitleId;
@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long beginMs;
@property (nonatomic) unsigned long long endMs;
@property (retain, nonatomic) NSMutableArray *sentence;
@property (retain, nonatomic) NSMutableArray *languageWording;

+ (void)initialize;

- (void)setLanguageWording:(id)a0;
- (id)languageWording;
- (void)setSentence:(id)a0;
- (id)sentence;
- (void)setEndMs:(unsigned long long)a0;
- (unsigned long long)endMs;
- (void)setBeginMs:(unsigned long long)a0;
- (unsigned long long)beginMs;
- (void)setObjectId:(unsigned long long)a0;
- (unsigned long long)objectId;
- (void)setSubtitleId:(unsigned int)a0;
- (unsigned int)subtitleId;

@end
