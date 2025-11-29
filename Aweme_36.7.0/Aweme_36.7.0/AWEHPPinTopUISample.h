@class UIImageView, AWEHPPinTopUISampleModel, NSString;

@interface AWEHPPinTopUISample : UIView <AWEHPPinTopUILifeCycleProtocol>

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEHPPinTopUISampleModel *configModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pinTopComponentDidShow;
- (void)pinTopComponentDidDismiss;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (double)viewWidth;

@end
