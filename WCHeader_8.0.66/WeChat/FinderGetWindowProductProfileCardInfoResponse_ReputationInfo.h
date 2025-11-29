@class NSString;

@interface FinderGetWindowProductProfileCardInfoResponse_ReputationInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int hasReputationInfo;
@property (nonatomic) unsigned int reputationScore;
@property (retain, nonatomic) NSString *reputationWording;
@property (retain, nonatomic) NSString *reputationBackgroundColor;
@property (retain, nonatomic) NSString *reputationTextColor;
@property (retain, nonatomic) NSString *reputationLevelWording;

+ (void)initialize;

@end
