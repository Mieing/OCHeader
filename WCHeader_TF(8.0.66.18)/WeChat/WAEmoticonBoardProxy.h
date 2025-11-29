@class EmoticonBoardView, NSString, UIFont, EmoticonSearchHalfScreenViewController, MMTextView;

@interface WAEmoticonBoardProxy : NSObject <EmoticonBoardViewDelegate, BaseEmoticonViewDelegate, EmoticonSearchHalfScreenViewControllerDelegate, IWAEmoticonBoardService> {
    EmoticonBoardView *_emoticonBoardView;
    NSString *_appId;
    MMTextView *_textView;
    UIFont *_font;
    EmoticonSearchHalfScreenViewController *_searchEmoticonViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)IsSupportEmoticonBoard;

- (id)init;
- (void)initEmoticonView;
- (void)setOverrideUserInterfaceStyle:(long long)a0;
- (void)setAppId:(id)a0;
- (void)showEmoticonBoardViewInView:(id)a0 animated:(BOOL)a1;
- (double)getEmoticonBoardViewPreferHeight;
- (void)onSendButtonClicked;
- (void)didSelectorEmoticon:(id)a0;
- (void)didSelectorSelfDefinedEmotcion:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfEmoticon:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setCanSend:(BOOL)a0;
- (void)setFinishButtonTitle:(id)a0;
- (void)deleteEmoticon;
- (id)getGameVCByAppId:(id)a0;
- (void)setEmoticonFont:(id)a0;
- (void)setShowStoreEmoticon:(BOOL)a0;
- (void)OnEmoticonStateDidChanged:(BOOL)a0;
- (void)setShowSearchEmoticon:(BOOL)a0;
- (BOOL)isSticker;
- (void)onEmoticonSearchIconClicked;
- (void)showSearchEmoticonViewController;
- (void)onSearchEmoticonViewControllerSendEmoticon:(id)a0;
- (void).cxx_destruct;

@end
