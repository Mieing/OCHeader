@class AWEGrouponWidgetModel;

@interface AWEGrouponWidgetViewModel : NSObject

@property (retain, nonatomic) AWEGrouponWidgetModel *model;
@property (nonatomic) long long pageType;
@property (nonatomic) long long feedType;
@property (nonatomic) BOOL hasWidgetExposedOnce;
@property (nonatomic) BOOL hasWidgetClosedOnce;

+ (Class)aAWENearbyWidgetViewModelCommonAdapterClass;

- (BOOL)shouldShowWidget;
- (void)updateWidgetWithModel:(id)a0;
- (void)didCloseWidgetOnce;
- (void)widgetLoadFailed;
- (void)didExposeWidgetOnce;
- (BOOL)isFullScreenWidget;
- (void)didClickWidget:(BOOL)a0;
- (BOOL)isCurrentAwemeSatisfy:(id)a0;
- (id)initWithPageType:(long long)a0 feedType:(long long)a1;
- (id)aAWENearbyWidgetViewModelCommonAdapter;
- (void)trackWidgetResourceEvent:(id)a0 btmInfo:(id)a1;
- (void)__trackWidgetEvent:(id)a0 extraParams:(id)a1;
- (void)__sendUpstreamMessageWithType:(unsigned long long)a0;
- (id)__freshTypeWithPageType:(long long)a0 feedType:(long long)a1;
- (void).cxx_destruct;

@end
