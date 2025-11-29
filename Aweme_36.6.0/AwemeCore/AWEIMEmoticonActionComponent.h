@class NSString, UIView;
@protocol AWEIMEmoticonContainerViewProtocol, AWEIMEmoticonKeyBoardDelegate;

@interface AWEIMEmoticonActionComponent : AWEIMComponentBase <AWEIMEmoticonActionComponent>

@property (weak, nonatomic) UIView<AWEIMEmoticonContainerViewProtocol> *containerView;
@property (weak, nonatomic) id<AWEIMEmoticonKeyBoardDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)didSelectedWithTabType:(long long)a0;
- (void)didSelectedTabStore;
- (void)didSelectedTabSearch;
- (void)didSelectedCustomAdd;
- (void)didSelectedTrendingSearch;
- (void)didSelectedStoreAuthorFooterWithThemeModel:(id)a0;
- (void)didSelectEmoticonModel:(id)a0 themeModel:(id)a1 emoticonView:(id)a2 indexPath:(id)a3;
- (void)didSelectAIStyle:(id)a0;
- (void)trackDefaultEmoticonModel:(id)a0 section:(long long)a1;
- (void)didSelectedXmojiPlaceholder;
- (void)didSelectedHiEmoji;
- (void)didSelectedDelete;
- (void)didSelectedSendText;
- (void)didBeginPreviewEmotionModel:(id)a0 themeModel:(id)a1;
- (void)didChangedSelectedTab;
- (void).cxx_destruct;

@end
