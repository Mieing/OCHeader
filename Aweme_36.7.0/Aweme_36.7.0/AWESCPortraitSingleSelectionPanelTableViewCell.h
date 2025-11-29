@class DUXDivider, UILabel, DUXTextTag, BDSCImageView;

@interface AWESCPortraitSingleSelectionPanelTableViewCell : DUXSingleSelectionPanelTableViewCell

@property (retain, nonatomic) UILabel *label;
@property (nonatomic) BOOL showSeparator;
@property (nonatomic) long long accessoryStyle;
@property (retain, nonatomic) id accessoryInfo;
@property (retain, nonatomic) DUXTextTag *mTag;
@property (retain, nonatomic) DUXDivider *mSeparator;
@property (retain, nonatomic) BDSCImageView *mArrowImageView;
@property (retain, nonatomic) UILabel *mAccessoryTextLabel;

- (void)setTagString:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
