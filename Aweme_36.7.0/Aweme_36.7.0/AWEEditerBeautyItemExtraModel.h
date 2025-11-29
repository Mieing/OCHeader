@class AWERecordBeautyItemExtraBeautifyModel;

@interface AWEEditerBeautyItemExtraModel : AWERecordBeautyItemExtraModel {
    BOOL _isNone;
    BOOL _isDefault;
    BOOL _shouldDisableCache;
    BOOL _isStyleStatus;
    BOOL _isMultipersonStatus;
    AWERecordBeautyItemExtraBeautifyModel *_beautifyModel;
}

- (BOOL)isStyleStatus;
- (id)beautifyModel;
- (BOOL)isMultipersonStatus;
- (BOOL)p_getBOOLValueFromDict:(id)a0 key:(id)a1;
- (void)p_setupPropertiesWithExtraString:(id)a0 shouldUseComposerParams:(BOOL)a1 composerParamsStr:(id)a2;
- (void)fillBeautifyModelWithString:(id)a0;
- (void)p_generateBeautifyModelWithDict:(id)a0;
- (id)initWithExtraString:(id)a0 shouldUseComposerParams:(BOOL)a1 composerParamsStr:(id)a2;
- (BOOL)shouldDisableCache;
- (void).cxx_destruct;
- (BOOL)isDefault;
- (BOOL)isNone;

@end
