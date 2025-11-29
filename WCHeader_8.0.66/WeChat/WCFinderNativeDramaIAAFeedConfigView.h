@class UIImageView, UILabel, UIView;

@interface WCFinderNativeDramaIAAFeedConfigView : UIView

@property (nonatomic) BOOL volumeOn;
@property (copy, nonatomic) id /* block */ volumeAction;
@property (copy, nonatomic) id /* block */ closeAction;
@property (retain, nonatomic) UIImageView *volumeImageView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UILabel *textLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupUI;
- (void)_setupLayout;
- (void)updateWithVolumeOn:(BOOL)a0;
- (void)updateWithVolumeOn:(BOOL)a0 onTapVolumeAction:(id /* block */)a1 onTapCloseAction:(id /* block */)a2;
- (void)_onTapView:(id)a0;
- (void).cxx_destruct;

@end
