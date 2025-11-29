@class NSString;

@interface WCMicroMerchantFoldReportInfo : NSObject

@property (nonatomic) unsigned long long hitRuleType;
@property (retain, nonatomic) NSString *feedID;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long statusType;

+ (id)reportInfoWithInteraction:(id)a0 sessionID:(id)a1;
+ (id)reportInfoWithFoldAgainUsername:(id)a0 sessionID:(id)a1;
+ (unsigned long long)hitRuleTypeWithInteractionType:(unsigned long long)a0;

- (id)initWithHitRuleType:(unsigned long long)a0 feedID:(id)a1 username:(id)a2 sessionID:(id)a3 scene:(unsigned long long)a4 statusType:(unsigned long long)a5;
- (void)report;
- (void).cxx_destruct;

@end
