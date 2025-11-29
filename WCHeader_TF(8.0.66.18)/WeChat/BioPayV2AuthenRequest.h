@class NSString;

@interface BioPayV2AuthenRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *json;
@property (retain, nonatomic) NSString *signature;
@property (nonatomic) int biometryType;

+ (void)initialize;

@end
