@class ACCTemplateTextFragment, UIImageView, UILabel, UIView;

@interface ACCMVTextEditorTableViewCell : UITableViewCell

@property (retain, nonatomic) UIView *topVerticalLine;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *bottomVerticalLine;
@property (retain, nonatomic) UIView *textContainerView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *hintIcon;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) ACCTemplateTextFragment *textFragment;
@property (nonatomic) BOOL isCellSelected;

+ (id)cellIdentifier;

- (void)setTextFragment:(id)a0 topContent:(BOOL)a1 bottomContent:(BOOL)a2 selected:(BOOL)a3;
- (void)prepareForUnSelectedAnimation;
- (void)updateCover:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
