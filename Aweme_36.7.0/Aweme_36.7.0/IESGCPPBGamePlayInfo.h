@class NSString;

@interface IESGCPPBGamePlayInfo : GPBMessage

@property (nonatomic) long long type;
@property (nonatomic) long long platformReceiveCondition;
@property (copy, nonatomic) NSString *platformReceiveParam;
@property (nonatomic) long long lotteryReceiveCondition;
@property (copy, nonatomic) NSString *id_p;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int taskCondType;

+ (id)descriptor;

@end
