@class NSNumber, NSString;

@interface AWERuleReminderInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSNumber *hasNotifyPunish;
@property (retain, nonatomic) NSNumber *hasNotifyBan;
@property (retain, nonatomic) NSNumber *isPunished;
@property (retain, nonatomic) NSNumber *isBanned;
@property (retain, nonatomic) NSNumber *paperworkType;
@property (copy, nonatomic) NSString *punishedMsg;
@property (copy, nonatomic) NSString *bannedMsg;
@property (retain, nonatomic) NSNumber *punishCount;
@property (retain, nonatomic) NSNumber *judgeCount;
@property (retain, nonatomic) NSNumber *lastPunishType;
@property (retain, nonatomic) NSNumber *lastPunishCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
