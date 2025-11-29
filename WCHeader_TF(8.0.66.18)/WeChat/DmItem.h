@class NSString;

@interface DmItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) unsigned int xagreementId;

+ (void)initialize;

- (void)setXagreementId:(unsigned int)a0;
- (unsigned int)xagreementId;
- (void)setValue:(id)a0;
- (id)value;
- (void)setKey:(id)a0;
- (id)key;

@end
