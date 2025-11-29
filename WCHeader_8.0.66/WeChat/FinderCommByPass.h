@class NSData;

@interface FinderCommByPass : WXPBGeneratedMessage

@property (nonatomic) unsigned int byPassType;
@property (retain, nonatomic) NSData *byPassInfo;

+ (void)initialize;

- (void)setByPassInfo:(id)a0;
- (id)byPassInfo;
- (void)setByPassType:(unsigned int)a0;
- (unsigned int)byPassType;

@end
