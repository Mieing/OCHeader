@class SKBuiltinString_t, SnsObject;

@interface SnsADObject : WXPBGeneratedMessage

@property (retain, nonatomic) SnsObject *snsObject;
@property (retain, nonatomic) SKBuiltinString_t *adxml;
@property (retain, nonatomic) SKBuiltinString_t *dynamicTimelineObjXml;
@property (retain, nonatomic) SKBuiltinString_t *dynamicAdInfoXml;
@property (retain, nonatomic) SKBuiltinString_t *dynamicAdXml;

+ (void)initialize;

- (void)setDynamicAdXml:(id)a0;
- (id)dynamicAdXml;
- (void)setDynamicAdInfoXml:(id)a0;
- (id)dynamicAdInfoXml;
- (void)setDynamicTimelineObjXml:(id)a0;
- (id)dynamicTimelineObjXml;
- (void)setAdxml:(id)a0;
- (id)adxml;
- (void)setSnsObject:(id)a0;
- (id)snsObject;

@end
