@class MMLiveStorageCleanupPinningToken, NSArray, MMLiveKtvThemeItem, MMFinderLiveTaskId;

@interface MMLiveKtvResourceState : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (retain, nonatomic) MMLiveStorageCleanupPinningToken *themeResourcesPinToken;
@property (retain, nonatomic) NSArray *themes;
@property (retain, nonatomic) NSArray *reverbs;
@property (retain, nonatomic) MMLiveKtvThemeItem *currentTheme;

- (id)initWithTaskId:(id)a0;
- (id)liveTask;
- (void).cxx_destruct;

@end
