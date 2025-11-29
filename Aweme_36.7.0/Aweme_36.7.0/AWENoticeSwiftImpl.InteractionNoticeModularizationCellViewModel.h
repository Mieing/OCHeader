@interface AWENoticeSwiftImpl.InteractionNoticeModularizationCellViewModel : AWEInteractionNoticeBaseCellViewModel <BDStateMachineDelegate> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_interactiveNoticeModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_commentModel;
    void /* unknown type, empty encoding */ contentString;
    void /* unknown type, empty encoding */ deleteString;
    void /* unknown type, empty encoding */ $__lazy_storage_$_showVideoCover;
    void /* unknown type, empty encoding */ $__lazy_storage_$_showActionButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_showArrow;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isActionAttentionState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_actionButtonText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stateMachine;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shouldShowStickerOutSide;
    void /* unknown type, empty encoding */ flameInteractionViewModel;
    void /* unknown type, empty encoding */ flameModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_flameInteractionView;
}

- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)setupWithModel:(id)a0;
- (void)setupEditConfigs;
- (id)getNotificationInnerMessageTrackerParamsWithAction:(id)a0;
- (id)getTrackerSlideCellParams;
- (id)getTrackerDisableNoticeParams;
- (id)getDiggCommentParams;
- (void).cxx_destruct;

@end
