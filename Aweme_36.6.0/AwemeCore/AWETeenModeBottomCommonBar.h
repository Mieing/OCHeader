@class NSString, UIImageView, UILabel, UIView, UIViewController;

@interface AWETeenModeBottomCommonBar : AWETeenPlayInteractionBaseElement <AWEBaseElementProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *roundView;
@property (retain, nonatomic) UILabel *separateLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UIView *viewMask;
@property (copy, nonatomic) NSString *showType;
@property (weak, nonatomic) UIViewController *videoController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowWithModel:(id)a0;

- (void)p_setupLayout;
- (void)p_setupViews;
- (void)p_onSingleTap;
- (void)p_onSingleTapForHotSpot;
- (void)p_onSingleTapForAlbum;
- (void)p_onSingleTapForIPAlbumOrOthers;
- (void)p_onSingleTapForGroot;
- (void)p_onSingleTapForKnowledge;
- (void)p_onSingleTapForRelatedSearch;
- (id)p_setupGrootSchemaWithSchema:(id)a0 pediaID:(id)a1;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
