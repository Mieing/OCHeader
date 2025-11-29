@class NSString, NSDictionary;

@interface IESECWinFeedEnterParameters : NSObject

@property (copy, nonatomic) NSString *customIDs;
@property (copy, nonatomic) NSString *promotionID;
@property (nonatomic) unsigned long long feedType;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserId;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSString *passThroughAPI;
@property (copy, nonatomic) NSDictionary *entranceInfo;
@property (copy, nonatomic) NSString *sourceBtmToken;

- (void).cxx_destruct;

@end
