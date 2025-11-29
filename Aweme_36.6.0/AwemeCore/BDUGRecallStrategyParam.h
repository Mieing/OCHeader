@class NSString;

@interface BDUGRecallStrategyParam : BDUGBaseRequestParam

@property (copy, nonatomic) NSString *scenes;
@property (copy, nonatomic) NSString *sceneCategory;
@property (copy, nonatomic) NSString *appNotifyStatus;
@property (copy, nonatomic) NSString *systemNotifyStatus;
@property (nonatomic) long long sessionSubsistSecond;
@property (nonatomic) long long clientRequestTimestamp;
@property (copy, nonatomic) NSString *strategyJson;
@property (nonatomic) long long version;

- (void).cxx_destruct;

@end
