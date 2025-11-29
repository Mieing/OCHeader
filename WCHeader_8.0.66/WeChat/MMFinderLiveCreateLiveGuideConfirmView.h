@class MMUIButton;
@protocol MMFinderLiveCreateLiveGuideConfirmViewDelegate;

@interface MMFinderLiveCreateLiveGuideConfirmView : UIView

@property (retain, nonatomic) MMUIButton *startLiveButton;
@property (retain, nonatomic) MMUIButton *cancelButton;
@property (nonatomic) BOOL showCancelButton;
@property (weak, nonatomic) id<MMFinderLiveCreateLiveGuideConfirmViewDelegate> delegate;
@property (readonly, nonatomic) BOOL enableStartLive;
@property (readonly, nonatomic) double contentHeight;

- (id)init;
- (void)initStartLiveButton;
- (void)initCancelButton;
- (void)layoutSubviews;
- (void)layoutCancelButton;
- (void)layoutStartLiveButton;
- (void)updateEnableStartLive:(BOOL)a0;
- (void)updateShowCancelButton:(BOOL)a0;
- (double)getButtonHeight;
- (double)getButtonWidth;
- (void)onClickStartLiveButton:(id)a0;
- (void)onClickCancelButton:(id)a0;
- (void).cxx_destruct;

@end
