@class WCFinderRedDotCtrlInfo, FinderSyncClientStatus_DiscoveryReddotInfo;

@interface WCFinderSyncParamsModel : NSObject

@property (nonatomic) int selectorType;
@property (nonatomic) int scene;
@property (nonatomic) int reportScene;
@property (nonatomic) long long stayTLInterval;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *guideRedDotCtrlInfo;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *finderEntranceRedDotCtrlInfo;
@property (nonatomic) long long businessFlagShowOnBadge;
@property (retain, nonatomic) FinderSyncClientStatus_DiscoveryReddotInfo *finderDiscoveryReddotInfo;
@property (retain, nonatomic) FinderSyncClientStatus_DiscoveryReddotInfo *liveDiscoveryReddotInfo;
@property (retain, nonatomic) FinderSyncClientStatus_DiscoveryReddotInfo *socialHotDiscoveryReddotInfo;
@property (nonatomic) BOOL isFinderDau;

- (id)initWithSelectorType:(int)a0 scene:(int)a1 reportScene:(int)a2 stayTLInterval:(long long)a3;
- (void).cxx_destruct;

@end
