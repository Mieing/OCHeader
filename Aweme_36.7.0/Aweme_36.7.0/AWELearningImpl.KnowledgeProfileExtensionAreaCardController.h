@interface AWELearningImpl.KnowledgeProfileExtensionAreaCardController : NSObject <AWEProfileExtensionAreaCardControllerProtocol> {
    void /* unknown type, empty encoding */ knowledgeCardView;
    void /* unknown type, empty encoding */ commonParamModel;
}

+ (id)cardControllerWithCommonParam:(id)a0;

- (void)passCardView:(id)a0;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)updateLessonCountWithNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
