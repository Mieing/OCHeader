@interface AWEMessageReachTrackUtils : NSObject

+ (id)getDurationInfoWithWithModel:(id)a0 paramContext:(id)a1 trackInfo:(id)a2 channelID:(id)a3;
+ (id)getExtraWithWithModel:(id)a0 paramContext:(id)a1;
+ (void)track_messageReachNotificationDotShowDetail:(id)a0;
+ (id)generateComponentBlockTrackExtraInfoWithResultExtra:(id)a0 componentStatus:(unsigned long long)a1 isChannelLoaded:(BOOL)a2;
+ (void)track_messageReachDelayShowDuration:(id)a0;
+ (void)trackComponentPreCheckTimeout:(id)a0;
+ (void)track_messageReachRequestResult:(id)a0;
+ (id)getUselessRequestInfoWithParamContext:(id)a0 dataScenes:(id)a1 uselessRequestLink:(long long)a2 isRealBlocked:(BOOL)a3;
+ (void)track_messageReachUselessRequest:(id)a0;
+ (id)getDurationInfoWithParamContext:(id)a0;
+ (void)track_messageReachComponentBlock:(id)a0;
+ (id)generateComponentTackInfo:(id)a0;
+ (id)generateComponentBlockTackInfo:(id)a0 paramContext:(id)a1 blockCode:(long long)a2 blockDesc:(id)a3 extraInfo:(id)a4 fromCache:(BOOL)a5 result:(long long)a6;
+ (id)findResultModelWithComponentID:(id)a0 paramContext:(id)a1;
+ (void)trackBlockComponentInfo:(id)a0;
+ (id)generateComponentBlockTackInfo:(id)a0 paramContext:(id)a1 blockCode:(long long)a2 blockDesc:(id)a3 fromCache:(BOOL)a4 result:(long long)a5;
+ (id)generateComponentPreVerifyTrackParamsWithComponentModel:(id)a0 resultModel:(id)a1;
+ (void)trackBlockComponentListWithChannelID:(id)a0 paramContext:(id)a1 blockComponents:(id)a2;
+ (id)generateComponentListBlockTackInfo:(id)a0;
+ (id)generateComponentBlockTackInfo:(id)a0 paramContext:(id)a1 blockCode:(long long)a2 blockDesc:(id)a3;
+ (void)trackTryBubbleShowResultWithBubbleModel:(id)a0 channelID:(id)a1 result:(id)a2 isBottomChannel:(BOOL)a3;

@end
