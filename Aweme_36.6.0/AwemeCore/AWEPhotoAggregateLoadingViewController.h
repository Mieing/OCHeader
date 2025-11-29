@class AWEPhotoLoadingStyleConfig, UIView, NSString, UITextView, UIImageView, UIButton, UILabel, APCDTOComposerApi;
@protocol AWEPhotoAggregateLoadingActionDelegate;

@interface AWEPhotoAggregateLoadingViewController : UIViewController <UITextViewDelegate, AWEYearMemoryLoadingVCProtocol>

@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) AWEPhotoLoadingStyleConfig *config;
@property (retain, nonatomic) APCDTOComposerApi *apiModel;
@property (retain, nonatomic) UIImageView *backImageView;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UIView *redPacketView;
@property (retain, nonatomic) UIButton *authorBtn;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UILabel *progressTitleLabel;
@property (retain, nonatomic) UITextView *illustrateLabel;
@property (retain, nonatomic) UIView *failedView;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL showRedPacket;
@property (weak, nonatomic) id<AWEPhotoAggregateLoadingActionDelegate> delegate;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isAppearing;
@property (copy, nonatomic) NSString *taskKey;

+ (id)gradientLayerWithColors:(id)a0 startPoint:(struct CGPoint { double x0; double x1; })a1 endPoint:(struct CGPoint { double x0; double x1; })a2 locations:(id)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;

- (void)buildFailedView;
- (void)updateProgressWithNum:(double)a0;
- (void)clickOnBack;
- (void)clickOnAuthorization;
- (void)updateWithLoadingStatus:(unsigned long long)a0;
- (void)startAggregateLoading;
- (void)didCompleteLoading;
- (id)initWithStatus:(unsigned long long)a0 config:(id)a1;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;

@end
