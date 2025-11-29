@class NSString, AWEPOIDetailCollectButtonConfig, UILabel, AWEPOICollectView;

@interface AWEModernPOIDetailCollectButton : UIButton

@property (retain, nonatomic) AWEPOIDetailCollectButtonConfig *config;
@property (retain, nonatomic) NSString *theme;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL collected;
@property (retain, nonatomic) AWEPOICollectView *collectImageView;
@property (retain, nonatomic) UILabel *collectLabel;

+ (id)collectButtonWithConfig:(id)a0;
+ (id)collectButtonWithStyle:(unsigned long long)a0 theme:(id)a1;
+ (id)collectButtonWithStyle:(unsigned long long)a0;

- (void)setCollected:(BOOL)a0 animated:(BOOL)a1;
- (id)starView;
- (void).cxx_destruct;
- (void)setBorderWidth:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithConfig:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
