@class NSString, NSMutableArray;

@interface AcctConfigGroup : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSMutableArray *configs;

+ (void)initialize;

- (void)setConfigs:(id)a0;
- (id)configs;
- (void)setGroupName:(id)a0;
- (id)groupName;

@end
