@class ACCScanQRCodeScanningView, UIImageView, NSString, UILabel;

@interface ACCScanQRCodeMaskView : ACCScanBaseMaskView <ACCScanQRCodeMaskViewStudioProxy>

@property (retain, nonatomic) UILabel *noQRCodeAlertLabel;
@property (retain, nonatomic) ACCScanQRCodeScanningView *scanningView;
@property (retain, nonatomic) UIImageView *dotCoverImageView;
@property (retain, nonatomic) UILabel *bottomTipView;
@property (retain, nonatomic) UILabel *tabAlertLabel;
@property (retain, nonatomic) UIImageView *tabAlertImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
