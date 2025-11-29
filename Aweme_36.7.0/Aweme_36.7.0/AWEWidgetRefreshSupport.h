@class NSMutableDictionary, NSString, NSLock, NSMutableArray;

@interface AWEWidgetRefreshSupport : NSObject <AWEAppAwemeSettingMessage>

@property (retain) NSMutableDictionary *registerWidgets;
@property (retain) NSMutableArray *reloadTimelineWidgets;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) BOOL isLoginStatusChange;
@property (nonatomic) BOOL isTeenModeChange;
@property (nonatomic) BOOL isBasicModeChange;
@property (nonatomic) BOOL isPersonalRecommendChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setReloadTimelineFlagWithKind:(id)a0;
- (void)registerWidgetKind:(id)a0 needRefreshType:(unsigned long long)a1;
- (void)reloadTimelineWidget;
- (void)setCommonParamsAndReloadTimelineIfNeed;
- (void).cxx_destruct;

@end
