@class NSString;

@interface FinderLiveCoverInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int effectType;
@property (retain, nonatomic) NSString *effectText;

+ (void)initialize;

- (void)setEffectText:(id)a0;
- (id)effectText;
- (void)setEffectType:(unsigned int)a0;
- (unsigned int)effectType;

@end
