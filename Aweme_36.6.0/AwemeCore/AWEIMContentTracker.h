@interface AWEIMContentTracker : NSObject

+ (void)trackShow:(id)a0 extra:(id)a1;
+ (void)trackIMMessageClick:(id)a0 extra:(id)a1;
+ (void)trackVideoWithEvent:(id)a0 inCell:(id)a1 conversation:(id)a2;
+ (id)generateAITrackInfoFromMsgExt:(id)a0;
+ (void)trackClickWithMsg:(id)a0 conContext:(id)a1 extra:(id)a2;
+ (void)trackVideoClick:(id)a0;
+ (void)trackShowWithMsg:(id)a0 conContext:(id)a1 extra:(id)a2;
+ (id)cardCommonParamsWithMsg:(id)a0 conContext:(id)a1;
+ (void)p_addCommonParamsIn:(id)a0 message:(id)a1 extra:(id)a2;
+ (void)p_addCustomParamsIn:(id)a0 message:(id)a1;
+ (void)p_addServiceChatToolParamsIn:(id)a0 message:(id)a1;
+ (void)p_trackGroupChatShootImageMessageIfNeededWithEvent:(id)a0 message:(id)a1 conversation:(id)a2;
+ (void)p_trackImageMessageIfNeededWithEvent:(id)a0 message:(id)a1 conversation:(id)a2;
+ (void)trackImageMessageShowIfNeeded:(id)a0 conversation:(id)a1;
+ (void)trackImageMessageClickIfNeeded:(id)a0 conversation:(id)a1;
+ (void)trackShareCardEventWithName:(id)a0 force:(BOOL)a1 message:(id)a2 viewModel:(id)a3 conversation:(id)a4;
+ (void)trackUnavailableMessageShow:(id)a0 conversation:(id)a1;

@end
