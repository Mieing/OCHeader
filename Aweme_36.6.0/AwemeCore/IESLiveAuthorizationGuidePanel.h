@class HTSEventContext, NSDictionary, IESLiveAuthorizationModel, UILabel, UIButton;
@protocol IESLiveAuthorizationControllerProvider, IESLiveVerifyConfig;

@interface IESLiveAuthorizationGuidePanel : HTSLivePopUpView

@property (retain, nonatomic) IESLiveAuthorizationModel *model;
@property (retain, nonatomic) id<IESLiveAuthorizationControllerProvider> authorizationService;
@property (retain, nonatomic) id<IESLiveVerifyConfig> verifyConfig;
@property (nonatomic) unsigned long long source;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSDictionary *UIResources;
@property (weak, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) UILabel *contentLabel;
@property (weak, nonatomic) UIButton *certificationButton;
@property (weak, nonatomic) UIButton *contentButton;
@property (weak, nonatomic) UIButton *relationButton;
@property (weak, nonatomic) UILabel *relationTitleLabel;
@property (weak, nonatomic) UILabel *relationContentLabel;
@property (weak, nonatomic) UILabel *relationButtonLabel;
@property (weak, nonatomic) UIButton *submitButton;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) HTSEventContext *eventContext;

- (void)submitButtonClicked;
- (void)p_trackClickWithType:(id)a0;
- (void)updateViewsWithModel:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1 source:(unsigned long long)a2;
- (id)cellWithTitle:(id)a0 content:(id)a1 isRelation:(BOOL)a2;
- (void)certificationButtonClicked;
- (id)buttonWithNormalText:(id)a0 disableText:(id)a1 action:(SEL)a2;
- (void)contentButtonClicked;
- (void)relationButtonClicked;
- (BOOL)canSubmitNow;
- (id)sourceFromSource:(unsigned long long)a0;
- (id)erroreToastMessage;
- (void).cxx_destruct;
- (double)maxHeight;
- (void)show;
- (void)updateViews;
- (double)totalHeight;
- (void)layoutUI;

@end
