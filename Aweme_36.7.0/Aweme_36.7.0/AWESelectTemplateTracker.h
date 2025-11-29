@interface AWESelectTemplateTracker : NSObject

+ (id)commonParamsForPublishModel:(id)a0;
+ (id)contentTypeFromModel:(id)a0;
+ (void)trackForClickSelectTemplateButton:(id)a0;
+ (void)trackForVideoPlayAfterChangeTemplate:(id)a0;
+ (void)trackForVideoPlayTime:(id)a0;
+ (void)trackForClickChooseTemplate:(id)a0 chooseType:(long long)a1;
+ (void)trackForEnterTemplateEditScene:(id)a0;
+ (void)trackForTemplateShow:(id)a0 index:(unsigned long long)a1;
+ (void)trackForBackToStudioEditPage:(id)a0;
+ (void)trackForClickSaveTemplateEdit:(id)a0;
+ (void)trackForClickReplaceMaterial:(id)a0;
+ (void)trackForSelectAsset:(id)a0;
+ (void)trackForClickSaveAssetEdit:(id)a0;
+ (void)trackForCancelAssetEdit:(id)a0;
+ (void)trackForEnterEditTextScene:(id)a0;
+ (void)trackForSelectTemplateText:(id)a0;
+ (void)trackForStartSingleTextEdit:(id)a0;
+ (void)trackForSaveSingleTextEdit:(id)a0;
+ (void)trackForCancelTextEdit:(id)a0;
+ (void)trackForCompleteTextEdit:(id)a0;
+ (id)p_oneClickFilmingAdditonParamsForTrack:(id)a0 withIndex:(long long)a1;
+ (void)trackForVideoPlayFinish:(id)a0;

@end
