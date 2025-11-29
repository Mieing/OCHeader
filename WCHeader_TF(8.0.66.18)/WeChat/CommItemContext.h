@class NSString;

@interface CommItemContext : WXPBGeneratedMessage

@property (nonatomic) unsigned int bizuin;
@property (nonatomic) unsigned int appmsgid;
@property (nonatomic) unsigned int itemidx;
@property (nonatomic) unsigned int time;
@property (nonatomic) unsigned int itemShowType;
@property (nonatomic) unsigned int cardType;
@property (nonatomic) unsigned int pos;
@property (nonatomic) BOOL isClick;
@property (nonatomic) BOOL isOftenRead;
@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) NSString *wordingReportInfo;
@property (nonatomic) unsigned int style;

+ (void)initialize;

@end
