@class NSString, GameIndexGameBlockContent_ActRecomTpl, GameIndexGameBlockContent_SingleLineContentTpl;

@interface GameIndexGameBlockContent_BlockContentItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *moduleTitle;
@property (nonatomic) unsigned int positionId;
@property (retain, nonatomic) GameIndexGameBlockContent_ActRecomTpl *actRecom;
@property (retain, nonatomic) GameIndexGameBlockContent_SingleLineContentTpl *singleLineContent;
@property (nonatomic) unsigned int tplId;
@property (retain, nonatomic) NSString *externInfo;

+ (void)initialize;

@end
