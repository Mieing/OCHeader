@class WCAdDynamicFeedDynamicInfluentDataInfo, WCADChainStrengthenInfo, NSString, WCAdFinderTopicInfo;

@interface WCAdDynamicCacheInfo : NSObject <NSCoding>

@property (nonatomic) int adLiveStatus;
@property (retain, nonatomic) WCADChainStrengthenInfo *adChainStrengthenInfo;
@property (retain, nonatomic) WCAdFinderTopicInfo *adFinderTopicInfo;
@property (nonatomic) BOOL adWeAppRelievedBuyFlag;
@property (nonatomic) BOOL adWeAppFlagshipFlag;
@property (retain, nonatomic) NSString *adContinuousLikeNumberTitle;
@property (retain, nonatomic) NSString *adFireworkCheerNumberTitle;
@property (copy, nonatomic) NSString *adHighlightTagNumberTitle;
@property (retain, nonatomic) NSString *adStateSettingBarNumberTitle;
@property (retain, nonatomic) NSString *adHotDiscussedBarNumberTitle;
@property (retain, nonatomic) NSString *randomPickInvolvedCountInfo;
@property (retain, nonatomic) NSString *randomPickCollectedCountInfo;
@property (retain, nonatomic) WCAdDynamicFeedDynamicInfluentDataInfo *adFinderLiveInfluentData;
@property (retain, nonatomic) NSString *adRockPaperScissorsCountInfo;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
