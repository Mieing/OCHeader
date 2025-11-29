@interface ACCEffectAndTemplateUtil : NSObject

+ (BOOL)couldShowFullUnifyloading:(id)a0 templateModel:(id)a1;
+ (BOOL)couldAutoOpenSideSlipPanel:(id)a0;
+ (BOOL)loraIsGeneratingNotAutoOpenSideSlipPanel:(id)a0;
+ (BOOL)isSlidesOrImageOrLivePhoto:(id)a0;
+ (id)getNeedReplaceSlotIdList:(id)a0 templateModel:(id)a1 aigcTask:(id)a2;
+ (BOOL)couldInsertDueToPersonalResult;
+ (void)markAITemplateFollowPathAvatarNLESlotInfo:(id)a0 templateModel:(id)a1;
+ (BOOL)currentAvatarTemplateDidReplace:(id)a0 templateModel:(id)a1;
+ (void)slidesDidChangeReplaceAvatarPlaceHolderImageIfNeed:(id)a0 editOperateService:(id)a1 templateModel:(id)a2 aigcTask:(id)a3;

@end
