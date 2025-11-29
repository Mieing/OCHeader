@class NSString, UIImageView, UILabel, AWEIMConversationInfoModel, UIButton;

@interface AWECommentListInputSelectGroupView : UIView <AWECommentListInputSelectGroupViewProtocol>

@property (readonly, nonatomic) UIImageView *groupIconImageView;
@property (readonly, nonatomic) UILabel *groupNameLabel;
@property (readonly, nonatomic) UIButton *closeButton;
@property (readonly, nonatomic) AWEIMConversationInfoModel *model;
@property (copy, nonatomic) id /* block */ closeButtonTapBlock;
@property (readonly, nonatomic) BOOL hasGroup;
@property (nonatomic) BOOL inputViewRefactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderWithUIDesignInfo:(id)a0 context:(id)a1;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)triggerCloseButton;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__closeButtonTapped:(id)a0;
- (BOOL)__enableCommentPanelAddGroupNamePrefix;
- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
