@class NSString, UIView;
@protocol IESLiveFinishAudienceDynamicManager, IESLiveFinishAudiencePageDynamicData;

@interface IESLiveEndLiveDynamicCompUI : LynxUI

@property (retain, nonatomic) id<IESLiveFinishAudienceDynamicManager> dynamicManager;
@property (retain, nonatomic) id<IESLiveFinishAudiencePageDynamicData> dynamicData;
@property (copy, nonatomic) NSString *guideCardInfo;
@property (copy, nonatomic) NSString *isPaidRoom;
@property (copy, nonatomic) NSString *roomId;
@property (retain, nonatomic) UIView *view;
@property (nonatomic) BOOL showDynamicView;
@property (copy, nonatomic) NSString *roomServiceIdx;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__1182;
+ (id)__lynx_prop_config__1141;
+ (id)__lynx_ui_method_config__1223;

- (BOOL)shouldHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)propsDidUpdate;
- (id)getDIContext;
- (void)sendEventToRelaxPage;
- (void)setRoomId:(id)a0 requestReset:(BOOL)a1;
- (void)setRoomServiceIdx:(id)a0 requestReset:(BOOL)a1;
- (void)dynamicHide:(id)a0 withResult:(id /* block */)a1;
- (void).cxx_destruct;
- (id)createView;

@end
