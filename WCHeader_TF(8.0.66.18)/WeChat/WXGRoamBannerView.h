@class UILabel, NSString, UIView;
@protocol WXGRoamBannerViewDelegate;

@interface WXGRoamBannerView : UIView <IRoamBackupPackageServiceExt>

@property (nonatomic) long long curIndex;
@property (nonatomic) unsigned long long curNotify;
@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIView *labelIconView;
@property (nonatomic) BOOL isLeftStyle;
@property (weak, nonatomic) id<WXGRoamBannerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onTapToShowDetail;
- (void)layoutSubviews;
- (void)updateNotifyCode;
- (BOOL)isMultiPackageBackingup;
- (BOOL)isMultiPackageHasBannerStatus;
- (void)updateBanner;
- (void)updateBannerFrame;
- (void)onRoamBackupPackageServiceFinishDeletePackages:(int)a0;
- (void)onRoamBackupPackageServiceNotifyCode:(unsigned long long)a0 notifyCode:(unsigned long long)a1;
- (void)onRoamBackupPackageServiceFinishGetAllPackageWithError:(int)a0;
- (void)onRoamBackupPackageServiceTaskProgressEvent:(unsigned long long)a0 current:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)setUiLabelAutoNewLine:(id)a0;
- (void).cxx_destruct;

@end
