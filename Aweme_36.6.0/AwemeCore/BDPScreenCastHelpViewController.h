@class UILabel, UIImageView, BDPScreenCastHelpCircleView;

@interface BDPScreenCastHelpViewController : BDPBusinessXScreenViewController {
    UILabel *_firstStepLabel;
    UILabel *_secondStepLabel;
    UILabel *_connectTipLabel;
    UILabel *_locateTipLabel;
    UILabel *_subTipLabel;
    BDPScreenCastHelpCircleView *_firstCircleView;
    BDPScreenCastHelpCircleView *_secondCircleView;
    UIImageView *_connectTipImageView;
    UIImageView *_locateTipImageView;
}

@property (nonatomic) long long originOrientation;

- (void)imageView:(id)a0 setImageFromRemoteWithName:(id)a1;
- (id)initWithUniqueID:(id)a0 orientation:(long long)a1;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupData;
- (void)updateNavigationTitle;

@end
