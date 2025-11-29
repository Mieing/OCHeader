@class NSString, NSDictionary, HTSEventContext, UILabel, UIView, UIButton;
@protocol IESLiveAuthorizationControllerProvider;

@interface IESLiveAuthorizationGuideTopView : UIView <UIGestureRecognizerDelegate>

@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL showRelation;
@property (copy, nonatomic) NSString *relationContent;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) UILabel *contentLabel;
@property (weak, nonatomic) UIButton *authBtn;
@property (weak, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) id<IESLiveAuthorizationControllerProvider> authorizationService;
@property (retain, nonatomic) NSDictionary *UIResources;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (retain, nonatomic) HTSEventContext *eventContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeBtnClicked;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 labelText:(id)a1 content:(id)a2 source:(id)a3 showRelation:(BOOL)a4 relationContent:(id)a5 diContext:(id)a6;
- (void)authBtnClicked;
- (void).cxx_destruct;
- (void)hide;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)show;
- (void)didTapSelf;
- (void)layoutUI;

@end
