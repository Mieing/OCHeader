@class NSString, UIImageView, UILabel, UIView, AWEGDPointComment;

@interface AWEGDCommentView : UIView <AWEGDImagePointProtocol>

@property (retain, nonatomic) AWEGDPointComment *comment;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *commentLabel;
@property (retain, nonatomic) UILabel *leftMarkLabel;
@property (retain, nonatomic) UILabel *rightMarkLabel;
@property (retain, nonatomic) UIView *userContainer;
@property (retain, nonatomic) UIView *commentContainer;
@property (retain, nonatomic) UIView *contentContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })commentSize;
- (void)updateCommentData:(id)a0;
- (struct CGSize { double x0; double x1; })userContainerSize;
- (void)cellWillShow;
- (struct CGSize { double x0; double x1; })calculateContainerSize;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;
- (struct CGSize { double x0; double x1; })avatarSize;
- (void)updateUI;
- (void)updateModel:(id)a0;

@end
