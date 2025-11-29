@class MMUIImageView, UIButton, MMFinderLiveTaskId, RichTextView, MMUILabel;

@interface MMFinderLiveAudioRoomConnectMicView : MMPageSheetBaseView

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (nonatomic) BOOL isLocationAuthorized;
@property (retain, nonatomic) MMUIImageView *callImageView;
@property (retain, nonatomic) MMUILabel *callLabel;
@property (retain, nonatomic) RichTextView *showLocationView;
@property (retain, nonatomic) MMUILabel *showLocationLabel;
@property (retain, nonatomic) UIButton *connectMicBtn;
@property (copy, nonatomic) id /* block */ onClickedConnectMic;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (id)initWithTaskId:(id)a0 isLocationAuthorized:(BOOL)a1;
- (void)setupPageSheetConfig;
- (void)layoutSubviews;
- (void)setupUI;
- (void)layoutUI;
- (void)showWithAnimated:(BOOL)a0;
- (void)dealloc;
- (id)liveTask;
- (id)locationWording;
- (id)audienceLogReporter;
- (void)onClickedBtn;
- (void)onClickedShowLocation;
- (void)pageSheetDidClose:(BOOL)a0;
- (void).cxx_destruct;

@end
