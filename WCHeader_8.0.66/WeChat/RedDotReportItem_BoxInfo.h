@class NSString, ReddotExposeContext;

@interface RedDotReportItem_BoxInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long exposeSessionId;
@property (nonatomic) unsigned int pos;
@property (nonatomic) BOOL isReddot;
@property (nonatomic) unsigned int deleteTs;
@property (retain, nonatomic) NSString *notifyWording;
@property (nonatomic) unsigned int notifyType;
@property (nonatomic) unsigned int finderReddotType;
@property (retain, nonatomic) ReddotExposeContext *exposeContext;
@property (nonatomic) unsigned long long actionTime;

+ (void)initialize;

- (void)setActionTime:(unsigned long long)a0;
- (unsigned long long)actionTime;
- (void)setExposeContext:(id)a0;
- (id)exposeContext;
- (void)setFinderReddotType:(unsigned int)a0;
- (unsigned int)finderReddotType;
- (void)setNotifyType:(unsigned int)a0;
- (unsigned int)notifyType;
- (void)setNotifyWording:(id)a0;
- (id)notifyWording;
- (void)setDeleteTs:(unsigned int)a0;
- (unsigned int)deleteTs;
- (void)setIsReddot:(BOOL)a0;
- (BOOL)isReddot;
- (void)setPos:(unsigned int)a0;
- (unsigned int)pos;
- (void)setExposeSessionId:(unsigned long long)a0;
- (unsigned long long)exposeSessionId;

@end
