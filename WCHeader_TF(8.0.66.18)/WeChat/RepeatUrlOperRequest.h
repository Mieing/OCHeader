@class NSString;

@interface RepeatUrlOperRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int opertype;
@property (retain, nonatomic) NSString *docid;
@property (nonatomic) unsigned long long objectid;
@property (retain, nonatomic) NSString *shareusername;
@property (nonatomic) unsigned int exposuretimes;
@property (nonatomic) unsigned int likenum;
@property (nonatomic) unsigned int commentnum;
@property (nonatomic) unsigned int haswords;
@property (nonatomic) unsigned int isshowmenu;

+ (void)initialize;

@end
