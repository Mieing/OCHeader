@class FinderPrivateMsgContactExtInfo;

@interface WCFinderMsgContactExtInfo : NSObject

@property (nonatomic) BOOL isRequesting;
@property (nonatomic) unsigned long long lastRequestTime;
@property (nonatomic) unsigned int refreshInterval;
@property (retain, nonatomic) FinderPrivateMsgContactExtInfo *respExtInfo;

- (id)parseRankSignViewModel;
- (id)parseSignUIStateInfo;
- (id)parseBadgeLabelViewModel;
- (id)parseBuyBadgeInfo;
- (id)parseFrequentWatchBadgeInfo;
- (id)parseFollowerBadgeInfo;
- (void).cxx_destruct;

@end
