@class NSNumber, NSString;

@interface IESGCPSKReserveContext : NSObject

@property (copy, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *trafficSource;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *videoID;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *subScene;
@property (copy, nonatomic) NSString *promoterID;
@property (copy, nonatomic) NSString *userNickName;
@property (nonatomic) BOOL isAd;
@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *promoteInstanceID;
@property (nonatomic) long long isLivecellReport;
@property (copy, nonatomic) NSString *enterSubMethod;
@property (copy, nonatomic) NSString *isOtherChannel;
@property (nonatomic) int reserveType;
@property (copy, nonatomic) NSString *reserveVersionNum;

- (void).cxx_destruct;

@end
