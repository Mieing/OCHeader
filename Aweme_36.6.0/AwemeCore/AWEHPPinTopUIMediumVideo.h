@class UIImageView, NSString, AWEHPPinTopUIMediumVideoModel;

@interface AWEHPPinTopUIMediumVideo : UIView <AWEHPPinTopUILifeCycleProtocol>

@property (retain, nonatomic) AWEHPPinTopUIMediumVideoModel *configModel;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pinTopComponentDidShow;
- (void)pinTopComponentDidDismiss;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)setupUI;
- (double)viewWidth;

@end
