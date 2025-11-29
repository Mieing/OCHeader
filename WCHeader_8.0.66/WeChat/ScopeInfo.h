@class NSString;

@interface ScopeInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int authState;
@property (retain, nonatomic) NSString *extDesc;
@property (retain, nonatomic) NSString *authDesc;
@property (retain, nonatomic) NSString *subDesc;
@property (retain, nonatomic) NSString *authWording;

+ (void)initialize;

@end
