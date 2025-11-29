@class UIStackView, AWEIMShapeView, NSString, UIView, AWEIMRefreshImageView, AWEURLModel;
@protocol IESIMTitleStackViewProtocol;

@interface AWEIMGeneralCardView : UIView

@property (retain, nonatomic) UIView *imageContainer;
@property (retain, nonatomic) UIView *imageBackGroudColorView;
@property (retain, nonatomic) AWEIMRefreshImageView *imageView;
@property (retain, nonatomic) AWEIMShapeView *borderShapeView;
@property (retain, nonatomic) UIStackView<IESIMTitleStackViewProtocol> *titleStackView;
@property (nonatomic) BOOL chatListHasBackgroundImg;
@property (retain, nonatomic) AWEURLModel *urlModel;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *conversationID;

+ (id)p_defaultBGColor;

- (void)constraintSubviews;
- (void)setImageURL:(id)a0 backupImage:(id)a1;
- (void)p_initSubviews;
- (void)p_chatBackgroundDidChangeNty:(id)a0;
- (void)setImageURLModel:(id)a0 backupImage:(id)a1;
- (void)setImageURLModel:(id)a0 backupImage:(id)a1 backupImageContentMode:(long long)a2 backgroundColor:(id)a3 backupBackgroundColor:(id)a4;
- (void)__onLoadImage:(id)a0 error:(id)a1 backupImage:(id)a2;
- (void)__onLoadImage:(id)a0 error:(id)a1 backupImage:(id)a2 backupImageContentMode:(long long)a3 backgroundColor:(id)a4 backupBackgroundColor:(id)a5;
- (id)subtitle;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (void)setSubtitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)title;
- (void)dealloc;

@end
