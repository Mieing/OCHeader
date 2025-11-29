@class NSString, UILabel, UIImageView;

@interface AWEPlayInteractionWatchVideoLaterTagView : UIView

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *indicatorImageView;
@property (nonatomic) BOOL hasIndicator;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)dealloc;
- (void)onClick;
- (void)updateIconWithSize:(struct CGSize { double x0; double x1; })a0 labelMargin:(double)a1;
- (void)updateTitleWithFontSize:(double)a0;
- (id)initWithTitle:(id)a0 hasIndicator:(BOOL)a1 clickBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setup;

@end
