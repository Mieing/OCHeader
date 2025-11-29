@class NSString, NSMutableArray;

@interface PRConfigRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *baseid;
@property (retain, nonatomic) NSString *pid;
@property (retain, nonatomic) NSMutableArray *condition;
@property (nonatomic) unsigned int timestamp;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSMutableArray *reqlist;
@property (nonatomic) unsigned int protover;
@property (nonatomic) unsigned int sceneflag;

+ (void)initialize;

- (void)setSceneflag:(unsigned int)a0;
- (unsigned int)sceneflag;
- (void)setProtover:(unsigned int)a0;
- (unsigned int)protover;
- (void)setReqlist:(id)a0;
- (id)reqlist;
- (void)setType:(id)a0;
- (id)type;
- (void)setTimestamp:(unsigned int)a0;
- (unsigned int)timestamp;
- (void)setCondition:(id)a0;
- (id)condition;
- (void)setPid:(id)a0;
- (id)pid;
- (void)setBaseid:(id)a0;
- (id)baseid;

@end
