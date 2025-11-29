@class UILabel, UIImageView;

@interface LBSErrorViewController : UIViewController {
    UIImageView *m_errorImage;
}

@property (retain, nonatomic) UILabel *errorMessageLabel;

- (void)setErrorMessage:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;

@end
