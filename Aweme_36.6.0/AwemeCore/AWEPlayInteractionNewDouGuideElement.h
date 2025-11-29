@class AWEDetailCellTagLabel, UIImageView, NSString, UIView, UILabel;

@interface AWEPlayInteractionNewDouGuideElement : AWEPlayInteractionNewBottomElement

@property (retain, nonatomic) UIView *douGuideBottomView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AWEDetailCellTagLabel *douGuideTag;
@property (retain, nonatomic) UILabel *detailLabel;
@property (nonatomic) BOOL isFromPublish;
@property (nonatomic) BOOL hasJumpToFE;
@property (copy, nonatomic) NSString *jumpUrl;

- (void)viewController_willDisplay;
- (unsigned long long)elementVisibleType;
- (id)activateInfoWithData:(id)a0;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)tapView;
- (BOOL)shouldAppearWithData:(id)a0;
- (void)trackClickWithEventName:(id)a0;
- (void)p_reportWhenPublishOnAction:(long long)a0;
- (id)p_basicTrackParams;
- (void)updateDouGuideBottomView:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)identifier;

@end
