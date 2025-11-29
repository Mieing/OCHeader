@class NSString, FinderLiveLbsInfo, NSMutableArray, BaseResponse;

@interface FinderGetLiveTabsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *tabList;
@property (retain, nonatomic) FinderLiveLbsInfo *lbsInfo;
@property (nonatomic) unsigned int prefechMinInterval;
@property (nonatomic) unsigned int prefechTabPullType;
@property (nonatomic) unsigned int prefechPreTabPullType;
@property (nonatomic) unsigned int prefechNextTabPullType;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int hideTabs;
@property (retain, nonatomic) NSMutableArray *navTabList;

+ (void)initialize;

@end
