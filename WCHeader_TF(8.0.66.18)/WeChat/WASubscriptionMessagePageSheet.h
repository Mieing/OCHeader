@class WASubscriptionMessagePageSheetViewModel, WATemplateAudioPlayer;
@protocol WASubscriptionMessagePageSheetDelegate;

@interface WASubscriptionMessagePageSheet : WAAuthorizePageSheet

@property (retain, nonatomic) WATemplateAudioPlayer *audioPlayer;
@property (weak, nonatomic) id<WASubscriptionMessagePageSheetDelegate> authDelegate;
@property (readonly, nonatomic) WASubscriptionMessagePageSheetViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)playAudio:(id)a0;
- (id)subviewClassList;
- (id)subViewModel;
- (void)onAcceptButtonClick;
- (void)onRejectButtonClick;
- (void)onDeclineButtonClick;
- (void).cxx_destruct;

@end
