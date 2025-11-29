@interface FlowProfileBizUI.BotDiscoverTableViewCell : UITableViewCell <FlowIMX.FlowIMBotServiceDelegate, FlowIMX.FlowIMConversationServiceDelegate> {
    void /* unknown type, empty encoding */ _accountProvider;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ _voiceCallProvider;
    void /* unknown type, empty encoding */ _botSubscribeProvider;
    void /* unknown type, empty encoding */ margin;
    void /* unknown type, empty encoding */ botModel;
    void /* unknown type, empty encoding */ _conversation;
    void /* unknown type, empty encoding */ removeConversationFinished;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ clickAddButtonItemBlock;
    void /* unknown type, empty encoding */ containerGuide;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isSubscribed;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ trackParams;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarTagImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ titleText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_convTag;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hotIconLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subscribeNumLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_splitDotLable;
    void /* unknown type, empty encoding */ $__lazy_storage_$_creatorLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleLabel;
    void /* unknown type, empty encoding */ subtitleText;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subscribeButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_centerStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_banNoticeLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_immersiveTag;
    void /* unknown type, empty encoding */ $__lazy_storage_$_topTitledStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bottomDescStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selecctedView;
}

- (void)botInfoDidChange:(id)a0 updateBotType:(id)a1;
- (void)conversationDidForceDelete:(id)a0;
- (void)conversationDidCreateRemote:(id)a0 from:(id)a1;
- (void)conversationInfosChanged:(id)a0;
- (void)subscribeButtonClicked;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (id)initWithCoder:(id)a0;
- (void)traitCollectionDidChange:(id)a0;

@end
