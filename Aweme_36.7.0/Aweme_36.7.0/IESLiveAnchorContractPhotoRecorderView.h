@class IESLiveButton, UIImageView, IESLiveImageView, UILabel, IESLiveAnchorContractAVRecordParamModel, UIView;
@protocol IESLiveAnchorContractPhotoRecorderViewDelegate;

@interface IESLiveAnchorContractPhotoRecorderView : UIView

@property (retain, nonatomic) IESLiveAnchorContractAVRecordParamModel *config;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *idCardGuideView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) IESLiveButton *captureButton;
@property (retain, nonatomic) IESLiveImageView *flashButton;
@property (retain, nonatomic) IESLiveImageView *backButton;
@property (nonatomic) BOOL flashOn;
@property (retain, nonatomic) UIImageView *idCardExampleView;
@property (retain, nonatomic) IESLiveButton *reTryButton;
@property (retain, nonatomic) IESLiveButton *uploadVideoButton;
@property (retain, nonatomic) UIImageView *capturedImageView;
@property (weak, nonatomic) id<IESLiveAnchorContractPhotoRecorderViewDelegate> delegate;

- (void)flashButtonTapped;
- (void)addBackgroundMask;
- (void)captureButtonTapped;
- (void)reTryButtonTapped;
- (void)uploadVideoButtonTapped;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)setCapturedImage:(id)a0;
- (void)setupSubviews;
- (void)backButtonTapped;

@end
