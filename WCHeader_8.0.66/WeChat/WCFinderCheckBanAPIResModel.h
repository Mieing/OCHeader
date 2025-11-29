@class NSString;

@interface WCFinderCheckBanAPIResModel : NSObject

@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned long long businessType;
@property (nonatomic) unsigned long long ctrlInfoBusinessType;
@property (nonatomic) long long lastTimeStamp;
@property (nonatomic) BOOL isPenalized;
@property (nonatomic) BOOL isFreqIgnoreLimit;
@property (nonatomic) BOOL isExemptNMControl;
@property (nonatomic) unsigned long long penalizedReasonType;
@property (nonatomic) long long willPenaltyGapCount;
@property (nonatomic) long long willFreeGapCount;
@property (nonatomic) long long limitCtrlInfoReceiveTs;
@property (nonatomic) long long winType;

- (id)initWithRedDotPath:(id)a0 businessType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
