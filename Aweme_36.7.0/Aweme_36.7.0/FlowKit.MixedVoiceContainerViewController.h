@interface FlowKit.MixedVoiceContainerViewController : FlowCommon.FlowBaseViewController <FlowUIKit.FlowPagingMainTableViewGestureDelegate> {
    void /* unknown type, empty encoding */ completionHandler;
    void /* unknown type, empty encoding */ enterFromStepByStepCreateBot;
    void /* unknown type, empty encoding */ pageController;
    void /* unknown type, empty encoding */ margin;
    void /* unknown type, empty encoding */ requestImpl;
    void /* unknown type, empty encoding */ entryTime;
    void /* unknown type, empty encoding */ mixEntryTime;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ enterScene;
    void /* unknown type, empty encoding */ mixedViewModel;
    void /* unknown type, empty encoding */ initialTTSModel;
    void /* unknown type, empty encoding */ currentHeaderViewLayout;
    void /* unknown type, empty encoding */ lastSelectedIndex;
    void /* unknown type, empty encoding */ hasTrackExpandHeaderView;
    void /* unknown type, empty encoding */ hasTrackCollapseHeaderView;
    void /* unknown type, empty encoding */ hasAppeared;
    void /* unknown type, empty encoding */ currentPlayingId;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_finishMixedVoiceBtn;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pagingView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerView;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_UGCVoiceButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_createBotButton;
}

- (id)flow_trackParametersWith:(id)a0;
- (BOOL)mainTableViewGestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWith:(id)a1;
- (void)didSelectUGCVoiceButton;
- (void)didClickCancel;
- (void)didClickFinishMixedVoiceButton;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
