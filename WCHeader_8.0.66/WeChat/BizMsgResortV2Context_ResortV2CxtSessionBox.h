@interface BizMsgResortV2Context_ResortV2CxtSessionBox : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int time;
@property (nonatomic) unsigned int pos;
@property (nonatomic) unsigned int reddotStatus;
@property (nonatomic) unsigned int visibleStatus;

+ (void)initialize;

- (void)setVisibleStatus:(unsigned int)a0;
- (unsigned int)visibleStatus;
- (void)setReddotStatus:(unsigned int)a0;
- (unsigned int)reddotStatus;
- (void)setPos:(unsigned int)a0;
- (unsigned int)pos;
- (void)setTime:(unsigned int)a0;
- (unsigned int)time;
- (void)setStatus:(unsigned int)a0;
- (unsigned int)status;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;

@end
