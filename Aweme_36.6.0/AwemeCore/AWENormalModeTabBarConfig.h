@interface AWENormalModeTabBarConfig : NSObject

@property (nonatomic) BOOL delaySetupUI;
@property (nonatomic) BOOL nonDelayBackgroundView;
@property (nonatomic) BOOL hasRecoverUI;
@property (nonatomic) BOOL permanentHidden;
@property (nonatomic) BOOL logNotTriggerDescription;
@property (nonatomic) unsigned long long compactModeStrategy;
@property (nonatomic) BOOL useNewBreakPoint;

- (id)description;

@end
