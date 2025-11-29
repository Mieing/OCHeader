@class UIView, AWEVisionFlashLightView, DUXBaseImageView, DUXBaseButton, DUXBaseLabel;

@interface AWEVisionBasicView : UIView

@property (retain, nonatomic) DUXBaseLabel *albumEntranceLabel;
@property (retain, nonatomic) DUXBaseButton *albumEntranceButton;
@property (retain, nonatomic) DUXBaseImageView *albumEntranceImageView;
@property (retain, nonatomic) DUXBaseLabel *dyCodeEntranceLabel;
@property (retain, nonatomic) DUXBaseButton *dyCodeEntranceButton;
@property (retain, nonatomic) UIView *albumEntrance;
@property (retain, nonatomic) UIView *dyCodeEntrance;
@property (retain, nonatomic) DUXBaseButton *closeButton;
@property (retain, nonatomic) DUXBaseButton *recordButton;
@property (retain, nonatomic) DUXBaseButton *historyEntrance;
@property (retain, nonatomic) AWEVisionFlashLightView *bottomFlashLight;
@property (retain, nonatomic) AWEVisionFlashLightView *toolbarFlashLight;
@property (copy, nonatomic) id /* block */ clickAlbumEntranceBlock;
@property (copy, nonatomic) id /* block */ clickDYCodeEntranceBlock;
@property (copy, nonatomic) id /* block */ clickCloseButtonBlock;
@property (copy, nonatomic) id /* block */ clickRecordButtonBlock;
@property (copy, nonatomic) id /* block */ clickHistoryEntranceBlock;
@property (copy, nonatomic) id /* block */ clickBottomFlashLightBlock;
@property (copy, nonatomic) id /* block */ clickToolbarFlashLightBlock;

- (void)clickCloseButton;
- (void)clickRecordButton;
- (void)createRecordButton;
- (void)clickHistoryEntrance;
- (void)clickBottomFlashLight;
- (void)clickToolbarFlashLight;
- (void)clickAlbumEntrance;
- (void)clickDYCodeEntrance;
- (void)updateAlbumEntranceCover:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
