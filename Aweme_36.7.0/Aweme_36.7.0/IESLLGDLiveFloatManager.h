@class IESLLGDLiveFloatConfig;
@protocol IESLLPOILiveFloatOnTop;

@interface IESLLGDLiveFloatManager : NSObject

@property (retain, nonatomic) id<IESLLPOILiveFloatOnTop> liveFloatOnTop;
@property (retain, nonatomic) IESLLGDLiveFloatConfig *config;
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
