@class AWEIMMessage, NSString, UIView, MASConstraint;
@protocol IESIMCommentShareCommentBubbleViewProtocol, AWEIMCommentShareTableViewCellViewModelProtocol;

@interface AWEIMCommentShareTableViewCell : AWEIMUserMessageTableViewCell <AWEIMGradientBubbleProtocol>

@property (retain, nonatomic) UIView *bubleWrapperView;
@property (retain, nonatomic) UIView<IESIMCommentShareCommentBubbleViewProtocol> *commentBubleView;
@property (retain, nonatomic) id<AWEIMCommentShareTableViewCellViewModelProtocol> cellViewModel;
@property (retain, nonatomic) MASConstraint *bubleWrapperViewTrailingToAvatarConstraint;
@property (retain, nonatomic) MASConstraint *bubleWrapperViewLeadingToAvatarConstraint;
@property (readonly, nonatomic) AWEIMMessage *message;
@property (readonly, nonatomic) UIView *gradientBubbleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeWithMesasge:(id)a0;

- (void)configWithMessage:(id)a0;
- (void)p_didTapContainer;
- (BOOL)canDoubleTapToLike;
- (void).cxx_destruct;
- (id)menuItems;
- (void)setupUI;
- (void)setupSubviews;
- (void)handleTapGesture:(id)a0;
- (void)setUpConstraints;

@end
