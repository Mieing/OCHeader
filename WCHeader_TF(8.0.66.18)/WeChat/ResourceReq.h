@interface ResourceReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int subType;
@property (nonatomic) unsigned int resVersion;
@property (nonatomic) unsigned int keyVersion;
@property (nonatomic) unsigned int eid;

+ (void)initialize;

- (void)setEid:(unsigned int)a0;
- (unsigned int)eid;
- (void)setKeyVersion:(unsigned int)a0;
- (unsigned int)keyVersion;
- (void)setResVersion:(unsigned int)a0;
- (unsigned int)resVersion;
- (void)setSubType:(unsigned int)a0;
- (unsigned int)subType;

@end
