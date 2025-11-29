@class NSString;

@interface PrologueMsgSectionProperty : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int order;
@property (retain, nonatomic) NSString *hisAllExposedTitle;
@property (retain, nonatomic) NSString *hisExpandTitle;
@property (nonatomic) unsigned int newListUnfoldCount;
@property (nonatomic) unsigned int newListExpandCount;
@property (nonatomic) unsigned int historyListUnfoldCount;
@property (nonatomic) unsigned int historyListExpandCount;

+ (void)initialize;

@end
