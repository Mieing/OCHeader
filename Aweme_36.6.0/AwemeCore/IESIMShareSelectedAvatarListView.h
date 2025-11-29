@class UIScrollView, NSMutableDictionary, UIStackView;

@interface IESIMShareSelectedAvatarListView : UIView

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIStackView *containerView;
@property (retain, nonatomic) UIStackView *avatarContentView;
@property (retain, nonatomic) NSMutableDictionary *currentAvatarStack;

+ (double)avatarWidth;

- (void)p_setupConstraints;
- (long long)currentAddedAvartarCount;
- (void)addAvartarWithShareModel:(id)a0;
- (void)removeAvatarWithShareModel:(id)a0 needScrollToLast:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
