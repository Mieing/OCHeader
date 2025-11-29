@class NSString;

@interface BizAccountInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int banType;
@property (retain, nonatomic) NSString *banReason;
@property (nonatomic) unsigned int userRole;
@property (nonatomic) unsigned int serviceType;

+ (void)initialize;

- (void)setServiceType:(unsigned int)a0;
- (unsigned int)serviceType;
- (void)setUserRole:(unsigned int)a0;
- (unsigned int)userRole;
- (void)setBanReason:(id)a0;
- (id)banReason;
- (void)setBanType:(unsigned int)a0;
- (unsigned int)banType;
- (void)setUserName:(id)a0;
- (id)userName;

@end
