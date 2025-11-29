@interface AWEGrouponGuildUtil : NSObject

+ (void)performRunLSChannelResumeWithBlock:(id /* block */)a0;
+ (void)trackGroupOnSendBubbleModel:(id)a0;
+ (id)generateBussinessParamsModelWithGeneralGuideBubble:(id)a0 source:(id)a1 showCallback:(id /* block */)a2 dismissCallback:(id /* block */)a3 clickCallback:(id /* block */)a4 showInterruptCallback:(id /* block */)a5;
+ (id)getGroupOnChannelPlugin:(id)a0;
+ (id)getComponentBizExtraWithDotModel:(id)a0;
+ (id)getComponentBizExtraWithGuideModel:(id)a0;
+ (void)trackGroupOnReceiveDataWithGuildModel:(id)a0 bizSource:(id)a1;
+ (BOOL)hasUndertakeDot:(id)a0;
+ (id)modelToJsonWithModel:(id)a0;
+ (unsigned long long)getStyleWithDotModel:(id)a0;
+ (unsigned long long)getStyleWithGeneralGuideBubble:(id)a0;
+ (id)filterBasicTypesInObject:(id)a0;
+ (void)trackGroupOnSendComponet:(id)a0 bizParams:(id)a1;
+ (id)generateBussinessParamsModelWithDotModel:(id)a0 source:(id)a1 showCallback:(id /* block */)a2 hideCallBack:(id /* block */)a3 downgradeCallBack:(id /* block */)a4 showInterruptCallback:(id /* block */)a5;
+ (void)trackGroupOnSendDotModel:(id)a0;
+ (void)trackGroupOnRemoveDotWithRemoveType:(unsigned long long)a0 dotModel:(id)a1;

@end
