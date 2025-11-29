@class UIView, VoipRecentStatusFadeView, TextStateCardReporter, TextStateModel, NSString, UIImageView, VoipRecentStatusTextStatePublishSourceView, RichTextView, UILabel, VoipRecentStatusTextStatePublishIconButton;

@interface VoipRecentStatusTextStateCardView : VoipRecentStatusCardView <RichTextLayoutDelegate, VoipRecentStatusProperties>

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) VoipRecentStatusTextStatePublishIconButton *textStatePublishIconButton;
@property (retain, nonatomic) VoipRecentStatusTextStatePublishSourceView *textStatePublishSourceView;
@property (retain, nonatomic) RichTextView *descriptionRichTextView;
@property (retain, nonatomic) UILabel *positionLabel;
@property (retain, nonatomic) TextStateModel *textStateModel;
@property (retain, nonatomic) UIView *soundView;
@property (retain, nonatomic) UIImageView *soundIconImageView;
@property (retain, nonatomic) UIView *openPageHotView;
@property (retain, nonatomic) VoipRecentStatusFadeView *topFadeView;
@property (retain, nonatomic) VoipRecentStatusFadeView *bottomFadeView;
@property (nonatomic) BOOL hasShownBefore;
@property (retain, nonatomic) TextStateCardReporter *reporter;
@property (copy, nonatomic) id /* block */ didClickSoundButtonCallback;
@property (copy, nonatomic) id /* block */ didClickOpenPageButtonCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isSoundBtnHidden;
@property (nonatomic) BOOL shouldPlaySound;
@property (nonatomic) BOOL isVisable;

- (id)initWithUserName:(id)a0 textStateModel:(id)a1;
- (void)layoutSubviews;
- (double)preferredHeight;
- (void)onClickOpenPageHotViewWithSender:(id)a0;
- (void)onSilenceViewClickWithSender:(id)a0;
- (void)onCardShow;
- (double)lineWidthAtY:(double)a0 lineIndex:(long long)a1 richTextView:(id)a2;
- (void).cxx_destruct;

@end
