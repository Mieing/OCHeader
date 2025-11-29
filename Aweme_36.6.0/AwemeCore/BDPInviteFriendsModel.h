@class NSString, NSURL, NSDictionary;

@interface BDPInviteFriendsModel : NSObject

@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appCover;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSURL *originSchema;
@property (copy, nonatomic) NSDictionary *query;
@property (copy, nonatomic) NSDictionary *extra;

- (void).cxx_destruct;

@end
