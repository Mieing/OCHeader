@class NSMutableArray;

@interface XAgreementWordingSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *xagreementWording;

+ (void)initialize;

- (void)setXagreementWording:(id)a0;
- (id)xagreementWording;
- (void)setCount:(unsigned int)a0;
- (unsigned int)count;

@end
