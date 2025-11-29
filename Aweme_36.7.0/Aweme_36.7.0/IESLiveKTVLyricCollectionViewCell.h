@class CAGradientLayer, NSMutableDictionary, IESLiveOutsideStrokeLabel, NSString, UILabel, UIView, IESLiveLyricViewConfig;

@interface IESLiveKTVLyricCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) IESLiveOutsideStrokeLabel *maskLabel;
@property (retain, nonatomic) UIView *maskLabelContainer;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskFrame;
@property (retain, nonatomic) NSMutableDictionary *wordWidthCache;
@property (nonatomic) double titleWidth;
@property (nonatomic) double titleLeftOffset;
@property (retain, nonatomic) CAGradientLayer *gLayer;
@property (retain, nonatomic) IESLiveLyricViewConfig *config;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isFocused;

- (void)initView;
- (id)genGradient;
- (void)freshAllFrame;
- (void)updateProgress:(double)a0 wordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)cleanTitleStatus;
- (void)calcTitleWidth:(id)a0;
- (id)genImage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
