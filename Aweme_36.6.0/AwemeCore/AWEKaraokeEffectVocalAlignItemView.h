@class UIImageView, UILabel, NSNumber;

@interface AWEKaraokeEffectVocalAlignItemView : AWEKaraokeEffectEditItemView

@property (retain, nonatomic) UIImageView *leftArrow;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UIImageView *scaleView;
@property (retain, nonatomic) UILabel *noteLabel;
@property (retain, nonatomic) UIImageView *scaleTag;
@property (retain, nonatomic) NSNumber *value;
@property (nonatomic) double scaleWidth;
@property (nonatomic) struct CGSize { double width; double height; } lastSize;
@property (nonatomic) long long minOffset;
@property (nonatomic) long long maxOffset;
@property (nonatomic) long long bigScaleCount;
@property (nonatomic) long long smallScaleCount;

- (void)positionDidChanged:(id)a0;
- (void)drawScaleImage;
- (void)drawSliderImage;
- (void)configScaleTag:(id)a0 changed:(BOOL)a1;
- (void)changeLeftArrowClicked;
- (void)changeRightArrowClicked;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0;
- (void)layoutSubviews;
- (void)updateValue:(id)a0;

@end
