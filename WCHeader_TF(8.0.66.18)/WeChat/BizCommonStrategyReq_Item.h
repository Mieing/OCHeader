@interface BizCommonStrategyReq_Item : WXPBGeneratedMessage

@property (nonatomic) unsigned int business;
@property (nonatomic) unsigned int reqStrategy;

+ (void)initialize;

- (void)setReqStrategy:(unsigned int)a0;
- (unsigned int)reqStrategy;
- (void)setBusiness:(unsigned int)a0;
- (unsigned int)business;

@end
