@class UIImageView, AWEShareTokenHandlerResponseModel, UILabel;

@interface AWEShareTokenFeedShareCardView : AWEShareTokenNoteBaseCardView

@property (retain, nonatomic) AWEShareTokenHandlerResponseModel *model;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (id)initWithModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__joinFeedShare:(id)a0;
- (void).cxx_destruct;

@end
