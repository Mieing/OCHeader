@class NSString, NSDictionary;

@interface IESGCPDouLinkTencentContext : NSObject

@property (copy, nonatomic) NSString *gameID;
@property (nonatomic) BOOL isAuth;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSString *scopes;
@property (copy, nonatomic) NSString *commentId;
@property (nonatomic) long long roleUpdateTime;
@property (copy, nonatomic) NSString *activityId;
@property (copy, nonatomic) NSDictionary *route;
@property (copy, nonatomic) NSDictionary *trackerCommonParams;
@property (copy, nonatomic) NSString *extraParams;
@property (copy, nonatomic) NSDictionary *extraAttr;

- (void).cxx_destruct;

@end
