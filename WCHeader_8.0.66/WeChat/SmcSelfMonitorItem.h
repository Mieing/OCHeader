@interface SmcSelfMonitorItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int dataid;
@property (nonatomic) unsigned int action;
@property (nonatomic) unsigned int collectdate;
@property (nonatomic) unsigned int reportdate;
@property (nonatomic) unsigned int datacount;
@property (nonatomic) unsigned int uuid;
@property (nonatomic) unsigned int expand1;
@property (nonatomic) unsigned int expand2;

+ (void)initialize;

@end
