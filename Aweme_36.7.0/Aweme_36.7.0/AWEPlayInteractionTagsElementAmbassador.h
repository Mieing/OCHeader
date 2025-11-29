@class NSString, UIView;
@protocol AFDPlayInteractionTagsContainerViewProtocol, AWEPlayInteractionTagsElementAmbassadorDelegate;

@interface AWEPlayInteractionTagsElementAmbassador : AFDAmbassador <AWEPlayInteractionTagsElementAmbassadorProtocol>

@property (weak, nonatomic) id<AWEPlayInteractionTagsElementAmbassadorDelegate> delegate;
@property (retain, nonatomic) UIView<AFDPlayInteractionTagsContainerViewProtocol> *containerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContainerView;
- (BOOL)canShowContainerView;
- (void)trackShowCommentPanel:(id)a0;
- (void)showCommentPanelWithInsertIds:(id)a0 enterMethod:(id)a1;
- (id)model;
- (void).cxx_destruct;

@end
