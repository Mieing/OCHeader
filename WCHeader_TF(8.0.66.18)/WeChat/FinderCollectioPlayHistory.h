@class NSString;

@interface FinderCollectioPlayHistory : WXPBGeneratedMessage <YYModel>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int watchedCount;
@property (nonatomic) unsigned long long currentWatchingObjectId;
@property (nonatomic) unsigned long long lastPlayTime;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (void)initialize;


@end
