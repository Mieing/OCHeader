@class FinderLiveQuestInstance;

@interface FinderLiveAppMsgAnchorQuestUpdateInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) FinderLiveQuestInstance *questInstance;
@property (nonatomic) unsigned long long updateTime;

+ (void)initialize;

@end
