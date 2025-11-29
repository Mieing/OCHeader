@class NSMutableArray;

@interface XAgreementDmSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *items;

+ (void)initialize;

- (void)setItems:(id)a0;
- (id)items;
- (void)setCount:(unsigned int)a0;
- (unsigned int)count;

@end
