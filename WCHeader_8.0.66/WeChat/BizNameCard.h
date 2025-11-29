@class NSString;

@interface BizNameCard : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *buffer;
@property (retain, nonatomic) NSString *signature;

+ (void)initialize;

- (void)setSignature:(id)a0;
- (id)signature;
- (void)setBuffer:(id)a0;
- (id)buffer;

@end
