@class NSString;

@interface CustomizedInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int brandFlag;
@property (retain, nonatomic) NSString *externalInfo;
@property (retain, nonatomic) NSString *brandInfo;
@property (retain, nonatomic) NSString *brandIconUrl;

+ (void)initialize;

- (void)setBrandIconUrl:(id)a0;
- (id)brandIconUrl;
- (void)setBrandInfo:(id)a0;
- (id)brandInfo;
- (void)setExternalInfo:(id)a0;
- (id)externalInfo;
- (void)setBrandFlag:(unsigned int)a0;
- (unsigned int)brandFlag;

@end
