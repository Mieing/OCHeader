@class NSString;

@interface IESGCPPBPlayRecord : GPBMessage

@property (nonatomic) long long playId;
@property (copy, nonatomic) NSString *playIdStr;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *gameId;
@property (nonatomic) long long ownerUid;
@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *roomIdStr;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) int fare;
@property (copy, nonatomic) NSString *fareDesc;
@property (nonatomic) int peopleCount;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *createTime;
@property (copy, nonatomic) NSString *updateTime;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) int diamonds;
@property (nonatomic) int realPeopleCount;
@property (copy, nonatomic) NSString *auditDenyReason;
@property (copy, nonatomic) NSString *finishTime;
@property (copy, nonatomic) NSString *ownerOpenId;

+ (id)descriptor;

@end
