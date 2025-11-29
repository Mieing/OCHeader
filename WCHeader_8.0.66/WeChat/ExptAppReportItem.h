@interface ExptAppReportItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int exptId;
@property (nonatomic) unsigned int groupId;
@property (nonatomic) unsigned int exptSequence;
@property (nonatomic) unsigned int count;

+ (void)initialize;

- (void)setCount:(unsigned int)a0;
- (unsigned int)count;
- (void)setExptSequence:(unsigned int)a0;
- (unsigned int)exptSequence;
- (void)setGroupId:(unsigned int)a0;
- (unsigned int)groupId;
- (void)setExptId:(unsigned int)a0;
- (unsigned int)exptId;

@end
