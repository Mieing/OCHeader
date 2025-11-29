@interface AWEFeedLiveTabVCFactory : NSObject

@property (nonatomic) BOOL enableUseNewLiveTab;

+ (id)generateFeedLiveTabViewControllerWithEnterFrom:(id)a0 params:(id)a1 loadType:(long long)a2;
+ (id)sharedInstance;

- (BOOL)enableSwitchToNewLiveTab;

@end
