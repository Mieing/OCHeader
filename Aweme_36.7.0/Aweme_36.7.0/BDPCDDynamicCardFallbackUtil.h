@interface BDPCDDynamicCardFallbackUtil : NSObject

+ (id)cardV2FallbackHintStrWithTemplateType:(id)a0 cardEntityType:(id)a1 cardSourceScene:(id)a2 extDefaultHint:(id)a3;
+ (id)actionFallbackHintStrWithUnSupportTypeStr:(id)a0 actionImportanceType:(long long)a1;
+ (id)cardV1FallbackHintStrWithCardType:(id)a0 extDefaultHint:(id)a1;

@end
