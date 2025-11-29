@class NSString, NSNumber, NSDictionary;

@interface AWEFriendCardTrackContext : NSObject

@property (copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *cardType;
@property (nonatomic) long long recommendType;
@property (copy, nonatomic) NSString *recUid;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSNumber *imprOrder;
@property (copy, nonatomic) NSString *recReason;
@property (nonatomic) long long relationTag;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSDictionary *extra;

- (id)initWithAweme:(id)a0;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0;

@end
