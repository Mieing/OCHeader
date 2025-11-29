@class NSString, UILabel, UIImageView;

@interface AWEContentPreferenceTagView : UIView <AWEContentPreferenceTagViewProtocol>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *icon;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)onClick;
- (id)initWithTitle:(id)a0 clickBlock:(id /* block */)a1;
- (void)updateIconWithSize:(struct CGSize { double x0; double x1; })a0 labelMargin:(double)a1;
- (void)updateTitleWithFontSize:(double)a0;
- (void).cxx_destruct;
- (void)setup;

@end
