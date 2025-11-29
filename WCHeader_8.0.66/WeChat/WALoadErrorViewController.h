@class NSString, UIImageView, MMUILabel;

@interface WALoadErrorViewController : MMUIViewController {
    UIImageView *_errorLogo;
    MMUILabel *_titleLabel;
}

@property (copy, nonatomic) NSString *m_errStr;

- (id)initWithTitle:(id)a0 errString:(id)a1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;

@end
