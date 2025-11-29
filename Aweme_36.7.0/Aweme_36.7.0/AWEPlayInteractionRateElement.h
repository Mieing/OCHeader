@class UIImageView, NSString;

@interface AWEPlayInteractionRateElement : AWEPlayInteractionLeftElement <AWEElementSelfFilterProtocol>

@property (retain, nonatomic) UIImageView *rateImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activateInfoWithContext:(id)a0;

- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)updateViewLayout;
- (void)updateAwemeData;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
