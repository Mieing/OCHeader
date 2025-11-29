@class IESLiveChorusRankUser;

@interface HTSLiveCDNSingerInfo : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveChorusRankUser *singer;
@property (nonatomic) BOOL hasSinger;
@property (nonatomic) long long order;
@property (nonatomic) BOOL needApproach;
@property (nonatomic) BOOL isLead;
@property (nonatomic) long long score;

+ (id)descriptor;

@end
