@interface AWEPlayInteractionReCreateController : AWEPlayInteractionBaseController

@property (nonatomic) BOOL shouldUploadPlayTime;
@property (nonatomic) long long tagId;
@property (nonatomic) BOOL isDisplaying;

- (void)sendPlayTimeRequest;
- (void)uploadPlayTimeLater:(id)a0;
- (void)refreshUploadStatus;
- (void)setData:(id)a0;
- (void)viewWillAppear;
- (void)reset;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)viewWillDisappear;

@end
