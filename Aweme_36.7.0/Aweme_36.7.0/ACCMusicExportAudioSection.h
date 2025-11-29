@class UIButton;

@interface ACCMusicExportAudioSection : UITableViewCell

@property (retain, nonatomic) UIButton *exportButton;
@property (copy, nonatomic) id /* block */ clickAction;

+ (double)sectionHeight;

- (void)exportButtonClick;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupUI;

@end
