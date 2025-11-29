@class UITextView, NSString, IESECGoodsDetailDescriptionTextViewDelegate, UILabel, UIView, IESECUIImageView;
@protocol IESECGoodsDetailQAUIProtocol;

@interface IESECGoodsDetailDescriptionCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) id<IESECGoodsDetailQAUIProtocol> model;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *contentTextView;
@property (retain, nonatomic) IESECUIImageView *expandIcon;
@property (retain, nonatomic) UIView *tapGestureView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *seperateLineView;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (copy, nonatomic) NSString *lastAccessibilityLabel;
@property (retain, nonatomic) IESECGoodsDetailDescriptionTextViewDelegate *delegate;
@property (nonatomic) long long QAType;
@property (nonatomic) BOOL shouldShowSeperateLineView;

+ (double)contentMaxWidth;
+ (double)titleMaxWidth;
+ (id)titleAttributedStringWithQA:(id)a0 QAType:(long long)a1;
+ (id)contentAttributedStringWithQA:(id)a0 QAType:(long long)a1 calculateHeight:(BOOL)a2;
+ (double)heightForTitleWithQA:(id)a0 QAType:(long long)a1;
+ (double)heightForContentWithQA:(id)a0 QAType:(long long)a1;
+ (double)heightWithQA:(id)a0 QAType:(long long)a1;

- (void)configWithQA:(id)a0 pageIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)tap;

@end
