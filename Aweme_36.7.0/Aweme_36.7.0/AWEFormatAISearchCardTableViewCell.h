@class AWEFormatAISearchCardFormatInfo, UIView, AWEFormatAISearchCardAvatarView, DUXBaseLabel;

@interface AWEFormatAISearchCardTableViewCell : DUXBaseTableViewCell

@property (retain, nonatomic) AWEFormatAISearchCardAvatarView *avatarView;
@property (retain, nonatomic) DUXBaseLabel *nameLab;
@property (retain, nonatomic) DUXBaseLabel *descLab;
@property (retain, nonatomic) DUXBaseLabel *tagLab;
@property (retain, nonatomic) DUXBaseLabel *gotoFormatBtn;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIView *centerContainerView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) AWEFormatAISearchCardFormatInfo *formatInfo;
@property (copy, nonatomic) id /* block */ gotoFormat;

- (void)p_setupLayout;
- (void)updateCellWithModel:(id)a0;
- (void)separatorViewShown:(BOOL)a0;
- (void)p_gotoFormat;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
