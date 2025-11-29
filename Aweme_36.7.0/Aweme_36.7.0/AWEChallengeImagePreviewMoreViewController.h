@class UILabel, NSString, AWEChallengeModel;

@interface AWEChallengeImagePreviewMoreViewController : UIViewController

@property (retain, nonatomic) AWEChallengeModel *model;
@property (retain, nonatomic) UILabel *uploadLabel;
@property (retain, nonatomic) UILabel *uploadDescLabel;
@property (copy, nonatomic) NSString *processId;

+ (void)uploadChallengeHeaderImage:(id)a0 challengeID:(id)a1 completion:(id /* block */)a2;

- (void)p_addNaviBar;
- (void)uploadChallengeImage_IMP:(id)a0;
- (void)uploadChallengeImage:(id)a0;
- (void)p_setupUI;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
