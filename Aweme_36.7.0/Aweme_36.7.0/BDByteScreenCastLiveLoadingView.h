@class UILabel, NSString, UIView;

@interface BDByteScreenCastLiveLoadingView : UIView <BDSCSearchDeviceLoadingViewProtocol>

@property (nonatomic) double centerYOffset;
@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) UILabel *topDescLabel;
@property (nonatomic) BOOL isLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderLoadingView:(id)a0 title:(id)a1 centerYOffset:(double)a2;
- (void).cxx_destruct;
- (void)startLoading;
- (void)stopLoading;
- (void)buildConstraints;

@end
