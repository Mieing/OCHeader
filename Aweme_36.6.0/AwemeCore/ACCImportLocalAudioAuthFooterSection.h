@class UILabel;

@interface ACCImportLocalAudioAuthFooterSection : UICollectionViewCell

@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *goToSettingsLabel;
@property (copy, nonatomic) id /* block */ clickAction;

+ (double)sectionHeight;

- (void)goToSettingsButtonClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
