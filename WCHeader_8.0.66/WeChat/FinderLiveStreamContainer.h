@class NSData, NSString, FinderThemeLiveContainerInfo, FinderLiveTabInfo, FinderLiveTabListContainerInfo, FinderLiveEndRelatedLiveContainerInfo, NSMutableArray, FinderLiveFollowContainerInfo;

@interface FinderLiveStreamContainer : WXPBGeneratedMessage

@property (nonatomic) unsigned int containerId;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSMutableArray *cardList;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSMutableArray *wordingColor;
@property (retain, nonatomic) NSData *containerLastBuffer;
@property (nonatomic) unsigned int countRestrict;
@property (retain, nonatomic) FinderLiveTabInfo *jumpTabInfo;
@property (retain, nonatomic) FinderThemeLiveContainerInfo *themeLiveContainerInfo;
@property (retain, nonatomic) FinderLiveTabListContainerInfo *liveTabListContainerInfo;
@property (retain, nonatomic) FinderLiveEndRelatedLiveContainerInfo *liveEndRelatedLiveContainerInfo;
@property (nonatomic) unsigned int nextPagePullType;
@property (retain, nonatomic) FinderLiveFollowContainerInfo *liveFollowContainerInfo;

+ (void)initialize;

@end
