@class NSMutableArray;

@interface BizServiceMenu : WXPBGeneratedMessage

@property (nonatomic) unsigned int uin;
@property (nonatomic) unsigned int interactiveMode;
@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) NSMutableArray *buttonList;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
