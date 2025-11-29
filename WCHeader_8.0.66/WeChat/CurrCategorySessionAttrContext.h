@class NSString, SdkUIContext, ExploreSessionsContext;

@interface CurrCategorySessionAttrContext : WXPBGeneratedMessage

@property (nonatomic) unsigned long long categoryStartSource;
@property (nonatomic) unsigned long long subStartSource;
@property (retain, nonatomic) NSString *appSessionId;
@property (nonatomic) unsigned long long appSessionStartScene;
@property (retain, nonatomic) NSString *continueFromBaseListenId;
@property (nonatomic) unsigned long long time;
@property (retain, nonatomic) ExploreSessionsContext *bornExploreSessions;
@property (retain, nonatomic) ExploreSessionsContext *playerExploreSessions;
@property (nonatomic) unsigned long long startScene;
@property (retain, nonatomic) SdkUIContext *startSdkId;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) unsigned long long clickId;
@property (nonatomic) unsigned int isSwitTab;
@property (retain, nonatomic) NSString *startLineId;
@property (nonatomic) unsigned int startWxstate;
@property (nonatomic) unsigned int startPlayerState;
@property (nonatomic) unsigned int currentTabIndex;
@property (nonatomic) unsigned int tabListIndex;
@property (nonatomic) unsigned int startPlayVolumePercent;

+ (void)initialize;

@end
