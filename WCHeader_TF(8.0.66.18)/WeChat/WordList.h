@class NSMutableArray;

@interface WordList : WXPBGeneratedMessage

@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *word;
@property (retain, nonatomic) NSMutableArray *wordInfo;

+ (void)initialize;

@end
