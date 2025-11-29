@interface MMFinderLiveSuperfanForbidJoinLiveFullScreenView : MMFinderLiveForbidJoinLiveFullScreenView

@property (copy, nonatomic) id /* block */ confirmCallback;

- (void)notifyAppear;
- (void)notifyDisappear;
- (void)updateConfirmButtonTitleAndImage;
- (id)tipsLabelText;
- (void)onConfirmButtonClicked;
- (void).cxx_destruct;

@end
