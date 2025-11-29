@class UIView, NSString, UIImageView, NSMutableDictionary, KeepRotateImageView, NSMutableArray, MMLaconButton, UIButton, MMUIButton, CContact;

@interface ContactSelectToolView : UIView <MMMenuControllerExt> {
    unsigned int _msgSelectedCount;
    double m_viewTop;
    UIView *m_viewBottomLine;
    NSMutableArray *m_arrMenu;
    CContact *m_menuContactToShow;
    CContact *m_menuContactShowing;
    CContact *m_menuContactSelected;
}

@property (retain, nonatomic) UIButton *completeButton;
@property (retain, nonatomic) MMLaconButton *msgHistoryButton;
@property (retain, nonatomic) KeepRotateImageView *progressView;
@property (retain, nonatomic) UIImageView *msgHistorySelectedMark;
@property (retain, nonatomic) UIImageView *msgHistoryGoSelectMark;
@property (retain, nonatomic) MMUIButton *msgRetryButton;
@property (retain, nonatomic) MMUIButton *foldButton;
@property (retain, nonatomic) NSMutableArray *selectedContacts;
@property (retain, nonatomic) NSMutableDictionary *headImageViews;
@property (readonly, nonatomic) UIView *selectContactsView;
@property (copy, nonatomic) id /* block */ completeHandler;
@property (copy, nonatomic) id /* block */ retryHandler;
@property (copy, nonatomic) id /* block */ viewMsgHistoryHandler;
@property (copy, nonatomic) id /* block */ deselectContactHandler;
@property (copy, nonatomic) id /* block */ previewSelectedContactHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)initViews;
- (id)generateCompleteButton;
- (void)updateWithCompleteBarButtonItem:(id)a0;
- (void)updateSelectedContacts:(id)a0;
- (void)updateHeadImageViews;
- (void)updateHeadPositionAnimated;
- (void)updateHeadPosition;
- (void)layoutSubviews;
- (id)historyButtonTitle;
- (void)resetSelectContactViewAndHistoryButtonWithViewTop:(double)a0;
- (void)onDone:(id)a0;
- (void)onViewMsgHistory:(id)a0;
- (void)updateMsgHistoryCount:(unsigned int)a0;
- (void)onStartUpload;
- (void)onFinishUpload;
- (void)onFailUpload;
- (void)onUpdateUploadProgress:(double)a0;
- (void)onClickRetry:(id)a0;
- (void)onShowAllSelectedContacts;
- (void)onTapHeadImage:(id)a0;
- (void)applicationDidBecomeActive;
- (void)initMenu;
- (void)deSelectContactInMune;
- (void)showMenuForContact:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)onMenuControllerDidHide;
- (void).cxx_destruct;

@end
