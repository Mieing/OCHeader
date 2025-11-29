@class AWEIMUITagLabelView, UIImageView, AWEIMUITagLabelModel, UILabel, UIView;
@protocol AWEIMLifeServiceChatMenuEditPageMenuContentViewDelegate;

@interface AWEIMLifeServiceChatMenuEditPageMenuContentView : UIView

@property (retain, nonatomic) UIImageView *deleteImageView;
@property (retain, nonatomic) UIView *deleteTouchView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *dragView;
@property (retain, nonatomic) UIView *dragTouchView;
@property (retain, nonatomic) UIView *separetionLine;
@property (retain, nonatomic) AWEIMUITagLabelModel *tagModel;
@property (retain, nonatomic) AWEIMUITagLabelView *tagView;
@property (nonatomic) double leftOffset;
@property (nonatomic) BOOL shouldShowTag;
@property (weak, nonatomic) id<AWEIMLifeServiceChatMenuEditPageMenuContentViewDelegate> delegate;

- (void)__updateUI;
- (void)__setupUI;
- (void)__didTapDelete:(id)a0;
- (void)__longPress:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 leftOffset:(double)a1;
- (void)updateWithModel:(id)a0 isSubmenu:(BOOL)a1 enableDelete:(BOOL)a2 enableMove:(BOOL)a3;
- (void).cxx_destruct;

@end
