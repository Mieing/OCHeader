@class NSDictionary, NSString, BDByteScreenCastContext;

@interface BDSCTopSpeedCastServiceIMP : NSObject <BDSCTopSpeedCastService>

@property (retain, nonatomic) BDByteScreenCastContext *context;
@property (copy, nonatomic) NSDictionary *configDict;
@property (nonatomic) long long popoverShowTimeInterval;
@property (nonatomic) long long tipShowTimeInterval;
@property (nonatomic) long long popoverShowTimes;
@property (nonatomic) long long tipShowTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindContext:(id)a0;
- (BOOL)enableTopSpeedCast;
- (BOOL)canShowTip;
- (BOOL)canShowPopover;
- (void)onPopoverShowed;
- (void)onTipShowed;
- (void)syncConfig:(id)a0;
- (void).cxx_destruct;

@end
