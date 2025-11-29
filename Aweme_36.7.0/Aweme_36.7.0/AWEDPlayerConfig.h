@class NSString, AWEDPlayerInteractionViewConfig, AWEPageContext;
@protocol AWEDPlayerPageContextProtocol;

@interface AWEDPlayerConfig : NSObject

@property (nonatomic) unsigned long long playerType;
@property (nonatomic) BOOL optimizeFakeLandscapeLayout;
@property (nonatomic) BOOL outerControlPlayStatus;
@property (copy, nonatomic) NSString *demaciaFirstFrameLogKey;
@property (copy, nonatomic) NSString *demaciaPlayErrorLogKey;
@property (copy, nonatomic) NSString *demaciaPlayBlockLogKey;
@property (nonatomic) BOOL disableTracker;
@property (nonatomic) BOOL disablePerformanceTracker;
@property (nonatomic) BOOL disablePeriodicTimeObserver;
@property (nonatomic) BOOL enableInteractionView;
@property (retain, nonatomic) AWEDPlayerInteractionViewConfig *interactionViewConfig;
@property (retain, nonatomic) AWEPageContext<AWEDPlayerPageContextProtocol> *context;
@property (copy, nonatomic) NSString *debugInfo;
@property (nonatomic) BOOL isFromDPlayerFeed;

- (void).cxx_destruct;
- (id)init;

@end
