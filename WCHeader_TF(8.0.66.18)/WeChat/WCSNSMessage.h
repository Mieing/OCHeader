@class NSString, WCUserComment, WCSNSRewardInfo;

@interface WCSNSMessage : NSObject

@property (retain, nonatomic) NSString *msgID;
@property (retain, nonatomic) NSString *objID;
@property (retain, nonatomic) NSString *parentObjID;
@property (retain, nonatomic) WCUserComment *comment;
@property (retain, nonatomic) WCUserComment *refComment;
@property (nonatomic) BOOL hasRead;
@property (nonatomic) unsigned int delStatus;
@property (retain, nonatomic) WCSNSRewardInfo *rewardInfo;
@property (retain, nonatomic) NSString *clientId;

+ (id)fromSnsActionGroup:(id)a0;

- (id)init;
- (id)description;
- (BOOL)isWCMessageDeleted;
- (BOOL)isWCDataItemDeleted;
- (void)upgradeDataIfNeeded;
- (long long)msgTypeFromClientId;
- (void).cxx_destruct;

@end
