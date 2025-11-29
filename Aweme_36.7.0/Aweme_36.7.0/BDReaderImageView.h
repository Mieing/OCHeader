@class UIColor, NSString, UIView;

@interface BDReaderImageView : UIImageView <BDReaderInsertViewProtocol>

@property (retain, nonatomic) UIView *darkModeMask;
@property (retain, nonatomic) UIColor *maskColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)readerInsertedViewThemeConfigChange:(id)a0;
- (id)readerInsertedViewRequestInsertedView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
