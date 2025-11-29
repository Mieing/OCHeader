@interface CommentLongPressPanelManager : NSObject <DUXSheetDelegate> {
    void /* unknown type, empty encoding */ sheet;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ dismissSheetCompletion;
    void /* unknown type, empty encoding */ longPressPanelVC;
    void /* unknown type, empty encoding */ containerDelegate;
    void /* unknown type, empty encoding */ isShowing;
}

- (void)sheetDidClickMaskArea:(id)a0;
- (BOOL)sheetWillStayAfterClickMaskArea;
- (void)sheetWillDismiss:(id)a0;
- (void)sheetDidDismiss:(id)a0;
- (id)copy;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopy;
- (void)dealloc;

@end
