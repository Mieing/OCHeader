@class NSMutableArray;

@interface BizPersonalCenterCellList : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *cellList;
@property (nonatomic) unsigned int isFeatureOpen;
@property (retain, nonatomic) NSMutableArray *dynamicList;
@property (nonatomic) unsigned int isOriginatorOpen;
@property (nonatomic) unsigned int notifymsgVersion;
@property (retain, nonatomic) NSMutableArray *tabList;
@property (nonatomic) unsigned int isInteractiveIdentityOpen;
@property (nonatomic) unsigned int isMySubscribePreload;
@property (nonatomic) unsigned int isSubscribetagOpen;
@property (nonatomic) unsigned int haveMySubscribetag;

+ (void)initialize;

- (void)setHaveMySubscribetag:(unsigned int)a0;
- (unsigned int)haveMySubscribetag;
- (void)setIsSubscribetagOpen:(unsigned int)a0;
- (unsigned int)isSubscribetagOpen;
- (void)setIsMySubscribePreload:(unsigned int)a0;
- (unsigned int)isMySubscribePreload;
- (void)setIsInteractiveIdentityOpen:(unsigned int)a0;
- (unsigned int)isInteractiveIdentityOpen;
- (void)setTabList:(id)a0;
- (id)tabList;
- (void)setNotifymsgVersion:(unsigned int)a0;
- (unsigned int)notifymsgVersion;
- (void)setIsOriginatorOpen:(unsigned int)a0;
- (unsigned int)isOriginatorOpen;
- (void)setDynamicList:(id)a0;
- (id)dynamicList;
- (void)setIsFeatureOpen:(unsigned int)a0;
- (unsigned int)isFeatureOpen;
- (void)setCellList:(id)a0;
- (id)cellList;

@end
