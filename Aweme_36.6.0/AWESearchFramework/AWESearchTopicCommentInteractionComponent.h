@class NSLock, NSString, UIView, AWEGeneralSearchModel, NSDictionary, AWESearchCommentActionLikeView, AWESearchEventDispather, UILabel;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchTopicCommentInteractionComponent : AWESearchComponent <AWESearchTopicCommentInteractionComponentProtocol, AWESearchComponentBusinessProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *expandReplayLabel;
@property (retain, nonatomic) UIView *expandReplayLabelClickView;
@property (retain, nonatomic) UILabel *replyLabel;
@property (retain, nonatomic) UIView *replyLabelClickView;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) AWESearchCommentActionLikeView *likeButton;
@property (retain, nonatomic) UIView *likeButtonClickView;
@property (retain, nonatomic) NSLock *diggLock;
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

- (void)commentLikeActionNotification:(id)a0;
- (void)commentTotalCountNotification:(id)a0;
- (void)postLikeNotificationForComment:(id)a0;
- (void)updateWithReferString:(id)a0;
- (void)onCommentDeleteNotification:(id)a0;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)setModelOnly:(id)a0;
- (id)p_context;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)openCommentPanel:(BOOL)a0;
- (void)trackClickCommentButton:(id)a0;
- (void)likeButtonClicked;
- (void)updateReplyLabels;
- (void)configIsSelected:(BOOL)a0 diggCount:(id)a1 needAnimate:(BOOL)a2;
- (void)trackClickLike:(BOOL)a0;
- (void)_addObservers;
- (void).cxx_destruct;
- (id)init;
- (id)getGroupId;
- (void)dealloc;
- (id)componentView;
- (void)setupUI;

@end
