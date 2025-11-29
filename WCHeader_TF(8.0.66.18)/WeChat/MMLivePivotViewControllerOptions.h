@class NSArray, MMFinderLiveRouterParams;

@interface MMLivePivotViewControllerOptions : NSObject

@property (retain, nonatomic) NSArray *contentVms;
@property (retain, nonatomic) NSArray *exportIds;
@property (retain, nonatomic) MMFinderLiveRouterParams *routeParam;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic) BOOL useAnchoredBypass;
@property (nonatomic) BOOL inMainScene;
@property (nonatomic) long long tabType;
@property (nonatomic) int commentScene;
@property (nonatomic) BOOL disableHistoryLives;
@property (nonatomic) BOOL useVerticalFullscreenMinimization;
@property (nonatomic) unsigned long long scrollDisabledReasons;

- (id)init;
- (id)initWithContentVms:(id)a0 selectedIndex:(unsigned long long)a1;
- (id)initWithExportIds:(id)a0 primaryContentVm:(id)a1 primaryContentVmIndex:(unsigned long long)a2;
- (void).cxx_destruct;

@end
