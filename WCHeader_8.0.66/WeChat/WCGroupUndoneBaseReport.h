@class NSString;

@interface WCGroupUndoneBaseReport : NSObject

@property (retain, nonatomic) NSString *todoId;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) unsigned int eRole;
@property (nonatomic) unsigned int eMsgType;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *appName;

- (BOOL)isValid;
- (void)invalidate;
- (void)report;
- (void)setRoleByContact:(id)a0;
- (void).cxx_destruct;

@end
