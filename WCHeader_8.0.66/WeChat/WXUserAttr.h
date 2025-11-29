@class NSString;

@interface WXUserAttr : WXPBGeneratedMessage

@property (nonatomic) unsigned int notAvailableFlag;
@property (retain, nonatomic) NSString *wording;

+ (void)initialize;

- (void)setWording:(id)a0;
- (id)wording;
- (void)setNotAvailableFlag:(unsigned int)a0;
- (unsigned int)notAvailableFlag;

@end
