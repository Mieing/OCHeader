@class NSString, NSDictionary, NSMutableDictionary, IESGCPLynxView, IESGCPTrackerNode;

@interface IESGCPLynxElement : LynxUI

@property (retain, nonatomic) IESGCPLynxView *lynxView;
@property (copy, nonatomic) NSString *nodeName;
@property (nonatomic) long long trackerNodeType;
@property (retain, nonatomic) NSDictionary *attribute;
@property (retain, nonatomic) NSMutableDictionary *showAttribute;
@property (retain, nonatomic) NSMutableDictionary *durationAttribute;
@property (retain, nonatomic) NSMutableDictionary *clickAttribute;
@property (weak, nonatomic) IESGCPTrackerNode *trackerNode;
@property (copy, nonatomic) NSString *perfTrackModuleName;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__961;
+ (id)__lynx_ui_method_config__2182;
+ (id)__lynx_ui_method_config__2583;
+ (id)__lynx_ui_method_config__2654;
+ (id)__lynx_ui_method_config__2735;
+ (id)__lynx_ui_method_config__2826;
+ (id)__lynx_ui_method_config__2907;
+ (id)__lynx_ui_method_config__3268;

- (void)onViewAppear;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })makeTargetRectWithLimitCheckArea:(id)a0;
- (void)onTrackActionTriggerWithNode:(id)a0 action:(long long)a1;
- (void)trackerNode:(id)a0 requestReset:(BOOL)a1;
- (void)reportTrack:(id)a0 withResult:(id /* block */)a1;
- (void)updateAttribute:(id)a0 withResult:(id /* block */)a1;
- (void)getRouteParams:(id)a0 withResult:(id /* block */)a1;
- (void)getSourceBTMToken:(id)a0 withResult:(id /* block */)a1;
- (void)getAllReportParams:(id)a0 withResult:(id /* block */)a1;
- (void)getReportTrackModel:(id)a0 withResult:(id /* block */)a1;
- (void)setClickRouteParams:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (id)createView;

@end
