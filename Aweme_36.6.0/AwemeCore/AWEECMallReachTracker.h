@interface AWEECMallReachTracker : NSObject

+ (id)generateBubbleShowTrackParamsInOriginPathWithContext:(id)a0;
+ (id)generateDotShowTrackParamsInOriginPathWithContext:(id)a0;
+ (void)trackMallMsgReceiveWithRespModel:(id)a0 bizSource:(id)a1;
+ (void)trackMallMsgReceiveWithBubbleModel:(id)a0 bizSource:(id)a1;
+ (void)trackMallMsgRecallWithContext:(id)a0;
+ (id)generateMRShowTrackParamsWithParamsModel:(id)a0 componentModel:(id)a1;
+ (id)generateMRBlockTrackParamsWithParamsModel:(id)a0 componentModel:(id)a1;
+ (id)generateNormalParamasWithBubbleMsg:(id)a0 redTag:(id)a1 bizSource:(id)a2;
+ (id)generateTrackParamsWithBubbleMsg:(id)a0;
+ (id)getMRNormalTrackParamsWithParamsModel:(id)a0 componentModel:(id)a1;

@end
