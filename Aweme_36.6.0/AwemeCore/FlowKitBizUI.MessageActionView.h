@interface FlowKitBizUI.MessageActionView : UIView {
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ searchAction;
    void /* unknown type, empty encoding */ ttsClickAction;
    void /* unknown type, empty encoding */ copyAction;
    void /* unknown type, empty encoding */ stopAction;
    void /* unknown type, empty encoding */ likeAction;
    void /* unknown type, empty encoding */ manageMessageAction;
    void /* unknown type, empty encoding */ triggerAction;
    void /* unknown type, empty encoding */ deepSearchAction;
    void /* unknown type, empty encoding */ collectionAction;
    void /* unknown type, empty encoding */ isSubscribed;
    void /* unknown type, empty encoding */ shareAction;
    void /* unknown type, empty encoding */ showSearchButton;
    void /* unknown type, empty encoding */ showTTSButton;
    void /* unknown type, empty encoding */ ttsStatus;
    void /* unknown type, empty encoding */ sepLine;
    void /* unknown type, empty encoding */ regenMessageButton;
    void /* unknown type, empty encoding */ preMessageButton;
    void /* unknown type, empty encoding */ nextMessageButton;
    void /* unknown type, empty encoding */ dropDownViewModel;
    void /* unknown type, empty encoding */ regenerateDropdownView;
    void /* unknown type, empty encoding */ leftActions;
    void /* unknown type, empty encoding */ rightActions;
    void /* unknown type, empty encoding */ leftMessageStackView;
    void /* unknown type, empty encoding */ rightMessageStackView;
    void /* unknown type, empty encoding */ cancellableSet;
    void /* unknown type, empty encoding */ ttsPlayingView;
    void /* unknown type, empty encoding */ ttsLoadingView;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ hideSepLine;
}

- (void)actionSingleCollectionClickWithSender:(id)a0;
- (void)actionCollectionClickWithSender:(id)a0;
- (void)actionNextMessageClickWithSender:(id)a0;
- (void)actionPreMessageClickWithSender:(id)a0;
- (void)actionRegenClickWithSender:(id)a0;
- (void)actionSearchClickWithSender:(id)a0;
- (void)actionCopyClickWithSender:(id)a0;
- (void)ttsButtonClickWithSender:(id)a0;
- (void)actionDislikeClickWithSender:(id)a0;
- (void)actionLikeClickWithSender:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
