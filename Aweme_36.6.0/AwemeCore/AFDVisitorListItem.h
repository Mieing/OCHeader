@class NSString, AWEUserModel;
@protocol AWEIMStreakDisplayManagerProtocol;

@interface AFDVisitorListItem : NSObject

@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) id<AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isUnread;
@property (nonatomic) long long fromPageType;
@property (nonatomic) long long prePageType;

- (void)p_setupWithModel:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
