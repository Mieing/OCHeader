@class NSString;

@interface IESLiveLGameAudienceEntranceInfoModel : NSObject

@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *gameIconURL;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *clickIDNature;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) unsigned long long gameType;
@property (nonatomic) long long currentUserCount;
@property (nonatomic) long long playedUserCount;
@property (nonatomic) BOOL disableEntrance;
@property (nonatomic) unsigned long long instantPlayStatus;
@property (nonatomic) unsigned long long instantPlayOpenStatus;

+ (id)modelWithJson:(id)a0;

- (void)parseWithJson:(id)a0;
- (void).cxx_destruct;

@end
