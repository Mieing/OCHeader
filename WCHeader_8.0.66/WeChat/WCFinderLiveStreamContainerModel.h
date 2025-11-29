@class FinderLiveFollowContainerInfo, NSString, WCFinderLiveTabInfo, NSData, FinderThemeLiveContainerInfo, NSMutableArray, FinderLiveTabListContainerInfo;

@interface WCFinderLiveStreamContainerModel : NSObject

@property (nonatomic) unsigned long long containerId;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSMutableArray *elementModelList;
@property (nonatomic) unsigned long long continueFlag;
@property (retain, nonatomic) NSMutableArray *wordingColors;
@property (retain, nonatomic) NSData *containerLastBuffer;
@property (nonatomic) unsigned long long countRestrict;
@property (retain, nonatomic) WCFinderLiveTabInfo *jumpTabInfo;
@property (retain, nonatomic) FinderThemeLiveContainerInfo *themeLiveContainerInfo;
@property (retain, nonatomic) FinderLiveTabListContainerInfo *liveTabListContainerInfo;
@property (nonatomic) BOOL enableDoubleFlowStyle;
@property (nonatomic) unsigned int nextPagePullType;
@property (retain, nonatomic) FinderLiveFollowContainerInfo *liveFollowContainerInfo;

+ (id)finderLiveStreamContainerModelFrom:(id)a0;

- (id)toFinderLiveStreamContainer;
- (id)firstJumpModel;
- (void).cxx_destruct;

@end
