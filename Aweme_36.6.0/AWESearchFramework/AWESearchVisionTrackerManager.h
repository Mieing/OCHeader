@interface AWESearchVisionTrackerManager : NSObject

+ (void)trackVisionSchemaJumpWithDataContext:(id)a0 extraParams:(id)a1;
+ (void)trackVisionImageNilWithDataContext:(id)a0 extraParams:(id)a1;
+ (void)trackPanelContentScrollDidScrollMethod:(id)a0 extraParams:(id)a1;
+ (void)trackVisionOnlineEventWithType:(id)a0 dataContext:(id)a1 extraParams:(id)a2;
+ (void)trackVisionOnlineMethodWithType:(id)a0 dataContext:(id)a1 extraParams:(id)a2;
+ (id)getBaseParams:(id)a0;

@end
