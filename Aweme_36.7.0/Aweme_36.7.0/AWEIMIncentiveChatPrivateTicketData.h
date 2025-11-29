@class NSString, NSArray, NSDictionary;

@interface AWEIMIncentiveChatPrivateTicketData : NSObject

@property (nonatomic) double lastUpdateTime;
@property (nonatomic) double expireTime;
@property (nonatomic) long long drawQuota;
@property (nonatomic) long long usedDrawQuota;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSArray *ticketDetailList;
@property (copy, nonatomic) NSDictionary *rawDict;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
