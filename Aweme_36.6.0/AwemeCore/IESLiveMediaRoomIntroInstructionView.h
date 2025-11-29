@class IESLiveMediaRoomIntroViewModel, UIView;

@interface IESLiveMediaRoomIntroInstructionView : UIView

@property (retain, nonatomic) IESLiveMediaRoomIntroViewModel *viewModel;
@property (retain, nonatomic) UIView *contentView;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)showIntroductionView;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)setupUI;

@end
