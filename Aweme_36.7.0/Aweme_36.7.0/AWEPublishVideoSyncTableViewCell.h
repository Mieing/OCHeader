@class UIButton, UIStackView;

@interface AWEPublishVideoSyncTableViewCell : AWENewPublishTableCell

@property (retain, nonatomic) UIStackView *buttonContainer;
@property (retain, nonatomic) UIButton *ulikeButton;
@property (retain, nonatomic) UIButton *xiguaButton;
@property (nonatomic) BOOL ulikeDisplayTracked;

- (void)configWithUlikeShow:(BOOL)a0 ulikeSelected:(BOOL)a1 xiguaShow:(BOOL)a2 xiguaSelected:(BOOL)a3 disable:(BOOL)a4 accsessText:(id)a5;
- (void)updateDisableAndAllGreyStatus:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
