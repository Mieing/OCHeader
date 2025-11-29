@class NSString;

@interface RSACert : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *keyN;
@property (retain, nonatomic) NSString *keyE;

+ (void)initialize;

@end
