@class NSString, UIImageView, AWEButton, UILabel, AWEAwemeModel;

@interface AWEAdOperationContentView : UIView <AWEAdOperationContentView>

@property (retain, nonatomic) UIImageView *logoView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) AWEButton *downloadButton;
@property (retain, nonatomic) AWEButton *closeButton;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) unsigned long long cardStatusCode;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ downloadBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)downloadButtonClicked:(id)a0;
- (void)constraintSubviews;
- (void)p_updateConstraintForLandScape;
- (void)p_updateConstraintForPortrait;
- (id)adInfoOfWebView;
- (void)openAppStoreWithParams:(id)a0 awemeModel:(id)a1;
- (void)p_trackDownloadClick;
- (void)closeButtonClicked:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
