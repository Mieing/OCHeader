@class NSString, UIImageView, UILabel, UIButton;

@interface IESLiveUserCardProfileSettingItemView : UIView

@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isManualSelect;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (nonatomic) BOOL isSelected;

- (void)selectButtonDidClicked;
- (id)initWithTitle:(id)a0 desc:(id)a1 isSelected:(BOOL)a2;
- (void).cxx_destruct;
- (void)setupViews;

@end
