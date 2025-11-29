@interface AWESearchTipDataUtil : NSObject

+ (id)addParams:(id)a0 toString:(id)a1;
+ (unsigned long long)interactorTipTypeWith:(id)a0 referString:(id)a1;
+ (void)bottomMixInfoBarDidTapWithModel:(id)a0 imageSlidesIndex:(long long)a1;
+ (id)playletSchemaWith:(id)a0;
+ (void)bottomPlayletBarDidTapWithSchema:(id)a0;
+ (id)bottomInteractorModelWith:(id)a0 referString:(id)a1;
+ (void)updateBottomInteractorModel:(id)a0 withAwemeModel:(id)a1 referString:(id)a2;
+ (void)bottomMixInfoBarDidTap:(id)a0 imageSlidesIndex:(long long)a1;
+ (void)bottomPlayletBarDidTap:(id)a0;
+ (void)bottomHotListBarDidTap:(id)a0;
+ (id)rightTopInfoModelWith:(id)a0 referString:(id)a1;
+ (void)updateRightTopModel:(id)a0 withAwemeModel:(id)a1 referString:(id)a2;
+ (void)updatePlayletTopModel:(id)a0 withAwemeModel:(id)a1;
+ (void)updateMixInfoTopModel:(id)a0 withAwemeModel:(id)a1;
+ (id)rightTopPlayletTrackParams:(id)a0;
+ (id)btmIdWithAwemeModel:(id)a0;
+ (id)dcmIdWithAwemeModel:(id)a0;
+ (id)rightTopMixInfoTrackParams:(id)a0;
+ (id)hotTipsModelWith:(id)a0 referString:(id)a1;
+ (id)playletModelWith:(id)a0 referString:(id)a1;
+ (id)mixInfoModelWith:(id)a0 referString:(id)a1;
+ (void)updateHotTipsModel:(id)a0 withAwemeModel:(id)a1 referString:(id)a2;
+ (void)updatePlayletModel:(id)a0 withAwemeModel:(id)a1 referString:(id)a2;
+ (void)updateMixInfoModel:(id)a0 withAwemeModel:(id)a1 referString:(id)a2;
+ (id)bottomBarConfigFor:(unsigned long long)a0;
+ (id)configColorForName:(id)a0 config:(id)a1 defaultColor:(id)a2;
+ (id)hotTipsTextWith:(id)a0 color:(id)a1;
+ (id)showHotTipsTrackParamsWith:(id)a0;
+ (id)clickHotTipsTrackParamsWith:(id)a0;
+ (id)textAttributesWithColor:(id)a0;
+ (id)playletTrackParamsWith:(id)a0;
+ (id)mixInfoTrackParamsWith:(id)a0;
+ (void)bottomHotListBarDidTapWithModel:(id)a0;
+ (BOOL)isNeedInteractorTipWith:(id)a0 referString:(id)a1;

@end
