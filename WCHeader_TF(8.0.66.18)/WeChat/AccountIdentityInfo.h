@class NSString;

@interface AccountIdentityInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int authType;
@property (retain, nonatomic) NSString *authDesc;
@property (nonatomic) unsigned int authIconType;

+ (void)initialize;

@end
