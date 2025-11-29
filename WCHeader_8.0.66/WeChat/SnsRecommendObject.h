@class SKBuiltinString_t, SnsObject;

@interface SnsRecommendObject : WXPBGeneratedMessage

@property (retain, nonatomic) SnsObject *snsObject;
@property (retain, nonatomic) SKBuiltinString_t *recommendXml;

+ (void)initialize;

- (void)setRecommendXml:(id)a0;
- (id)recommendXml;
- (void)setSnsObject:(id)a0;
- (id)snsObject;

@end
