@class AWESearchCardNicknameComponentModel, NSString, AWESearchEventDispather, NSDictionary, UILabel, UIView, UITapGestureRecognizer;
@protocol AWESearchComponentProtocol, AWESearchContainerProtocol;

@interface AWESearchCardNicknameComponent : AWESearchComponent <AWESearchCardNicknameComponentProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *publishTimeLabel;
@property (retain, nonatomic) UILabel *authorIntroductionLabel;
@property (retain, nonatomic) id<AWESearchComponentProtocol> textTagComponent;
@property (retain, nonatomic) id<AWESearchComponentProtocol> customTagComponent;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) AWESearchCardNicknameComponentModel *componentModel;
@property (nonatomic) double nicknameWidth;
@property (nonatomic) double introductionWidth;
@property (nonatomic) double timeWidth;
@property (copy, nonatomic) id /* block */ clickNicknameBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;

- (void)addGestureRecognizer;
- (void)componentViewLayoutSubviews;
- (void)containerTapped:(id)a0;
- (void)p_createComponent;
- (void)p_loadComponent;
- (id)p_context;
- (id)interactor;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)setupUI;
- (id)router;
- (void)updateWithModel:(id)a0;

@end
