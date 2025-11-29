@class IESECInsetsLabel, IESECCommentMediaItemViewModel, IESECUIButton, UIButton;
@protocol IESECCommentMediaStatusBarDelegate;

@interface IESECCommentMediaStatusBarView : UIView

@property (retain, nonatomic) IESECUIButton *backButton;
@property (retain, nonatomic) IESECInsetsLabel *indexLabel;
@property (retain, nonatomic) UIButton *multipleMediaModeButton;
@property (retain, nonatomic) IESECCommentMediaItemViewModel *model;
@property (nonatomic) unsigned long long enterFrom;
@property (weak, nonatomic) id<IESECCommentMediaStatusBarDelegate> delegate;
@property (nonatomic) long long index;

- (void)clickBackButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enterFrom:(unsigned long long)a1;
- (void)updateViewWithModel:(id)a0 length:(long long)a1;
- (void)updateMultiplyButtonStatus:(BOOL)a0;
- (void)clickMultipleMediasButton;
- (void).cxx_destruct;
- (void)setupSubviews;

@end
