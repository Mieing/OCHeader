@class WAAppItemData, NSString;

@interface WAPermissionLaunchCGIUserInfo : NSObject

@property (retain, nonatomic) WAAppItemData *appItem;
@property (nonatomic) unsigned int enterScene;
@property (nonatomic) BOOL isFromBackground;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL isSilentOpen;
@property (nonatomic) BOOL isSheetMode;
@property (nonatomic) BOOL isCustomLoading;
@property (nonatomic) long long costTime;
@property (nonatomic) unsigned int launchMode;
@property (copy, nonatomic) NSString *migrateFromUsername;

- (void).cxx_destruct;

@end
