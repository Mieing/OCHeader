@class UILabel, NSString;

@interface ACCScanStatusTipView : UIView <ACCScanStatusTipViewStudioProxy>

@property (retain, nonatomic) UILabel *statusTipLabel;
@property (retain, nonatomic) UILabel *subTipLabel;
@property (nonatomic) BOOL shakeTipsContinuousStatus;
@property (nonatomic) BOOL onlySupportQrCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateScanStatus:(unsigned long long)a0;
- (id)initWithStatusTipViewWithOnlySupportQrCode:(BOOL)a0;
- (void)updateOnlyQrcodeTitle;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
