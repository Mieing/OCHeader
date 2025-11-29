@class NSData;

@interface SignatureInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSData *signature;

+ (void)initialize;

@end
