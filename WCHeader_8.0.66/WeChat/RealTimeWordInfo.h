@class WordMatchConfig, WordList;

@interface RealTimeWordInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int version;
@property (retain, nonatomic) WordMatchConfig *config;
@property (retain, nonatomic) WordList *whiteList;
@property (retain, nonatomic) WordList *blackList;

+ (void)initialize;

@end
