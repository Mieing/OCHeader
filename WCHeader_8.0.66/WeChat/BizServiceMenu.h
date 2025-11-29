@class NSMutableArray;

@interface BizServiceMenu : WXPBGeneratedMessage

@property (nonatomic) unsigned int uin;
@property (nonatomic) unsigned int interactiveMode;
@property (nonatomic) unsigned int updateTime;
@property (retain, nonatomic) NSMutableArray *buttonList;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int type;

+ (void)initialize;

- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setVersion:(unsigned int)a0;
- (unsigned int)version;
- (void)setButtonList:(id)a0;
- (id)buttonList;
- (void)setUpdateTime:(unsigned int)a0;
- (unsigned int)updateTime;
- (void)setInteractiveMode:(unsigned int)a0;
- (unsigned int)interactiveMode;
- (void)setUin:(unsigned int)a0;
- (unsigned int)uin;

@end
