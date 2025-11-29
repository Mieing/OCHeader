@class NSString, NSMutableArray;

@interface AuthApp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *appname;
@property (nonatomic) unsigned int apptype;
@property (retain, nonatomic) NSMutableArray *authItem;
@property (nonatomic) unsigned int allscopeState;
@property (retain, nonatomic) NSString *apptypeDesc;
@property (retain, nonatomic) NSString *tips;
@property (nonatomic) unsigned int isShowAllscope;
@property (retain, nonatomic) NSString *appiconUrl;
@property (retain, nonatomic) NSString *wordingUseScope;

+ (void)initialize;

@end
