@interface AWERelatedRecommendTopElementManager : NSObject {
    void /* unknown type, empty encoding */ registerClass;
    void /* unknown type, empty encoding */ configElementsClass;
    void /* unknown type, empty encoding */ $__lazy_storage_$_defaultElementTypes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_adElementTypes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_chapterElementTypes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_mentionedElementTypes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_chapterAndMentionedElementTypes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_onlyTitleElementTypes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_defaultAiElementTypes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_multiTabsElementTypes;
    void /* unknown type, empty encoding */ $__lazy_storage_$_multiTabsWithoutChapterElementTypes;
}

@property (class, nonatomic, readonly) AWERelatedRecommendTopElementManager *sharedInstance;

- (void)registerWith:(long long)a0 elementClass:(Class)a1;
- (void)registerWithElementClass:(Class)a0;
- (void)registerElementsWithElements:(id)a0 configType:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
