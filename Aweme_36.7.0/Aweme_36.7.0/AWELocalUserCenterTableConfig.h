@class NSString;

@interface AWELocalUserCenterTableConfig : NSObject

@property (copy, nonatomic) NSString *tableName;
@property (readonly, nonatomic) long long userType;
@property (nonatomic) BOOL deleteBlockedUser;
@property (nonatomic) BOOL deleteUnfollowedUser;
@property (retain, nonatomic) Class modelClass;
@property (nonatomic) BOOL hasSynced;

- (void).cxx_destruct;

@end
