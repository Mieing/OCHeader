@class AWEECOMIMImageItemModel, UIImageView, AWEECOMIMVideoItemModel, UIView, AWEECOMIMMsgReferenceModel, YYLabel;

@interface AWEECOMIMMsgReferenceView : UIView

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *referenceImgView;
@property (retain, nonatomic) UIImageView *videoCoverImgView;
@property (retain, nonatomic) UIImageView *videoPlayImgView;
@property (retain, nonatomic) AWEECOMIMVideoItemModel *videoItemModel;
@property (retain, nonatomic) AWEECOMIMImageItemModel *imageItemModel;
@property (retain, nonatomic) YYLabel *textLabel;
@property (retain, nonatomic) AWEECOMIMMsgReferenceModel *referenceModel;
@property (copy, nonatomic) id /* block */ onPreviewTextBlock;
@property (copy, nonatomic) id /* block */ onReferenceViewClickBlock;

+ (double)referenceImgWidth;
+ (double)coverImgWidth;
+ (BOOL)isRecallReferenceWithReferenceModel:(id)a0;
+ (double)referenceImgHeightWithRealSize:(struct CGSize { double x0; double x1; })a0;
+ (double)coverImgHeightWithRealSize:(struct CGSize { double x0; double x1; })a0;
+ (id)generateTextWithModel:(id)a0;
+ (id)textLayoutWithTextWidth:(double)a0 attStr:(id)a1;
+ (struct CGSize { double x0; double x1; })getSizeWithModel:(id)a0 maxWidth:(double)a1;
+ (double)textHeightWithText:(id)a0 maxWidth:(double)a1;
+ (id)textFont;
+ (id)textColor;

- (void)textDidTapAction:(id)a0;
- (void)imageDidTapAction:(id)a0;
- (double)playImgWidth;
- (void)videoDidTapAction:(id)a0;
- (void)updateTextLabelWithModel:(id)a0;
- (void)enterMediaPreviewPageWithImageURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
