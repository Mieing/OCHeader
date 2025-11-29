@class NSArray, UIImageView, NSString, UILabel, IESEffectModel;

@interface AWEStoryStickerGuideViewController : AWEHalfScreenBaseViewController <AWEStoryStickerGuideViewControllerProtocol>

@property (retain, nonatomic) UIImageView *effectIcon;
@property (retain, nonatomic) UILabel *effectTitle;
@property (retain, nonatomic) NSArray *effectIDs;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openCameraWithEffectModel:(id)a0 logExtra:(id)a1;
+ (void)openCameraWithEffectIDs:(id)a0 logExtra:(id)a1;

- (void)updateWithEffectModel:(id)a0;
- (void)jumpToCamera;
- (void)configWithEffectIDs:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)setupUI;

@end
