@class AWEAwemeModel, DUXTextTag, UIView, BDMannorStyleTemplateComponentHeadInfoModel, NSString, UIImageView, BDImageView, NSDictionary, BDMannorComponentManagerContext, BDMannorStyleTemplateComponentModel, UILabel;

@interface AWEAdCommentHeaderCommerceView : UIView <AWEAdCommentHeaderCommerceView, BDMannorAdComponentProtocol>

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *phraseLabel;
@property (retain, nonatomic) UILabel *buttonLabel;
@property (retain, nonatomic) UIView *pointView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) BDImageView *avatarImageView;
@property (retain, nonatomic) DUXTextTag *tagView;
@property (retain, nonatomic) UIView *phraseView;
@property (retain, nonatomic) UIView *buttonView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) BDMannorStyleTemplateComponentModel *componentModel;
@property (retain, nonatomic) BDMannorStyleTemplateComponentHeadInfoModel *headInfo;
@property (copy, nonatomic) NSDictionary *parsedTrackConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) BDMannorComponentManagerContext *context;
@property (readonly, nonatomic) UIView *componentView;
@property (readonly, nonatomic) NSString *scene;
@property (readonly, nonatomic) NSString *componentType;
@property (readonly, nonatomic) NSString *componentID;
@property (readonly, nonatomic) BOOL isShow;
@property (readonly, nonatomic) BOOL downgrade;

+ (id)createViewWithModel:(id)a0;
+ (BOOL)shouldShowCommentHeadView:(id)a0;

- (void)showTrack;
- (void)setupGesture;
- (void)initTrack;
- (double)nameMaxWidth;
- (void)clickOnBlank;
- (void)clickOnAvatarImage;
- (void)clickOnNameLabel;
- (void)clickOnTag;
- (void)clickOnProductView;
- (void)clickOnButtonView;
- (void)clickTrack:(long long)a0 clickType:(id)a1 clickText:(id)a2;
- (id)initWithContext:(id)a0 componentType:(id)a1;
- (void)createComponentViewAndConfig;
- (void)destory;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)hide;
- (void)dealloc;
- (void)show;
- (void)setupUI;
- (void)setupModel:(id)a0;

@end
