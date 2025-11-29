@class NSString;

@interface BizAccountInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int banType;
@property (retain, nonatomic) NSString *banReason;
@property (nonatomic) unsigned int userRole;
@property (nonatomic) unsigned int serviceType;

+ (void)initialize;

@end
