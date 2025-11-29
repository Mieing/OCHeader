@class AWEGDLiveFloatConfig;
@protocol AWEPOILiveFloatOnTop;

@interface AWEGDLiveFloatManager : NSObject

@property (retain, nonatomic) id<AWEPOILiveFloatOnTop> liveFloatOnTop;
@property (retain, nonatomic) AWEGDLiveFloatConfig *config;
@property (nonatomic) BOOL isLiveFloatUserClosed;

- (void)setupConfig:(id)a0;
- (BOOL)fromLive;
- (void)showLiveFloat;
- (void)hideLiveFloat;
- (void)dismissLiveFloat;
- (void)muteLiveFloat:(BOOL)a0;
- (void)muteLiveWindow:(BOOL)a0;
- (void)setupLiveFloat;
- (void)updateLiveFloatStates;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
