@class AWESearchEventDispather, NSString, NSDictionary, AWESearchCardAuthorCombinationComponentModel, AWESearchAuthorContentView;
@protocol AWESearchCardAvatarComponentProtocol, AWESearchCardNicknameComponentProtocol, AWESearchCardFeedbackComponentProtocol, AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchVideoCardAuthorCombinationComponent : AWESearchComponent <AWESearchCardAuthorCombinationComponentProtocol>

@property (retain, nonatomic) id<AWESearchCardAvatarComponentProtocol> avatarComponent;
@property (retain, nonatomic) id<AWESearchCardFeedbackComponentProtocol> feedbackComponent;
@property (retain, nonatomic) id<AWESearchCardNicknameComponentProtocol> nicknameComponent;
@property (retain, nonatomic) AWESearchAuthorContentView *contentView;
@property (retain, nonatomic) AWESearchCardAuthorCombinationComponentModel *componentModel;
@property (copy, nonatomic) id /* block */ clickNicknameBlock;
@property (copy, nonatomic) id /* block */ clickAvatarImageBlock;
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

- (void)componentDidLoad;
- (void)componentViewLayoutSubviews;
- (void)p_createComponent;
- (id)p_context;
- (id)interactor;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (id)router;
- (void)updateWithModel:(id)a0;

@end
