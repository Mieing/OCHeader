@class AWESearchEventDispather, AWESearchTopicCommentUserView, NSString, AWEGeneralSearchModel, UIView, NSDictionary;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchTopicCommentUserComponent : AWESearchComponent <AWESearchTopicCommentUserComponentProtocol, AWESearchComponentBusinessProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchTopicCommentUserView *userView;
@property (retain, nonatomic) AWEGeneralSearchModel *bindedModel;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (copy, nonatomic) NSString *referString;
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
+ (struct CGSize { double x0; double x1; })p_calculateComponentSize:(double)a0 withModel:(id)a1;

- (void)updateWithReferString:(id)a0;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)updateSubviewFrames;
- (void)setModelOnly:(id)a0;
- (id)p_context;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)addEventHandlerToUserInfoView;
- (void)userTapped:(id)a0;
- (void)trackClickUser;
- (void).cxx_destruct;
- (id)init;
- (id)componentView;
- (void)setupUI;

@end
