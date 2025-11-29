@class NSString;

@interface AuthApp_AuthItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *scopeDesc;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned int isSwitchEnable;

+ (void)initialize;

@end
