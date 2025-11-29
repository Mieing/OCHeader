@class NSString, AWENearbyInnerFeedWidget;

@interface AWENearbyInnerLynxWidgetManager : NSObject <AWENearbyInnerFeedWidgetManagerProtocol>

@property (nonatomic) BOOL globalWidgetOriginalHidden;
@property (nonatomic) BOOL showingNearbyWidget;
@property (retain, nonatomic) AWENearbyInnerFeedWidget *widget;
@property (copy, nonatomic) NSString *lynxSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWENearbyInnerLynxWidgetManagerDOUYINLiteAdapterClass;
+ (id)shareInstance;

- (id)aAWENearbyInnerLynxWidgetManagerDOUYINLiteAdapter;
- (BOOL)canShowWidget;
- (struct CGPoint { double x0; double x1; })convertCorePositionFromGlobalWidget;
- (struct CGPoint { double x0; double x1; })convertCorePositionToGlobalWidgetCenter;
- (void)showWidgetWithSchema:(id)a0 completion:(id /* block */)a1;
- (void)removeWidgetAndShowGlobalWidget;
- (void)releaseWidget;
- (void)setWidgetHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
