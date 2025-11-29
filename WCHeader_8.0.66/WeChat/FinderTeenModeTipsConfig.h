@class NSString;

@interface FinderTeenModeTipsConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tipsWording;
@property (nonatomic) unsigned long long tipsDurian;
@property (nonatomic) unsigned int tipsLocation;
@property (nonatomic) unsigned int tipsUiStyle;

+ (void)initialize;

- (void)setTipsUiStyle:(unsigned int)a0;
- (unsigned int)tipsUiStyle;
- (void)setTipsLocation:(unsigned int)a0;
- (unsigned int)tipsLocation;
- (void)setTipsDurian:(unsigned long long)a0;
- (unsigned long long)tipsDurian;
- (void)setTipsWording:(id)a0;
- (id)tipsWording;

@end
