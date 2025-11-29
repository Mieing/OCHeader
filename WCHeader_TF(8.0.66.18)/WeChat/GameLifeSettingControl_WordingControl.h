@class NSString;

@interface GameLifeSettingControl_WordingControl : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *templateWording;

+ (void)initialize;

- (void)setTemplateWording:(id)a0;
- (id)templateWording;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;

@end
