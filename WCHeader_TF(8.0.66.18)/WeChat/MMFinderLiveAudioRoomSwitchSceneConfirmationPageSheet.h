@class UILabel, NSString;

@interface MMFinderLiveAudioRoomSwitchSceneConfirmationPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (nonatomic) unsigned long long scenario;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initForScenario:(unsigned long long)a0 confirmBlock:(id /* block */)a1;
- (void)layoutSubviews;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)initializeComponents;
- (BOOL)enableConfirm;
- (void).cxx_destruct;

@end
