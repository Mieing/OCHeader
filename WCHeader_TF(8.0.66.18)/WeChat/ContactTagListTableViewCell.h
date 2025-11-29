@class NSAttributedString, NSString, UIImageView, ContactTagData, MMUIButton, MMUILabel;

@interface ContactTagListTableViewCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *memberCountLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) UIImageView *selectIconView;
@property (retain, nonatomic) MMUIButton *renameButton;
@property (nonatomic) double titleHeight;
@property (nonatomic) double detailHeight;
@property (retain, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSAttributedString *attributeTagName;
@property (retain, nonatomic) NSString *memberCountText;
@property (retain, nonatomic) NSString *memberListText;
@property (retain, nonatomic) NSAttributedString *memberListAttributedText;
@property (nonatomic) BOOL showMemberList;
@property (nonatomic) BOOL showSelectControl;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isSelectDisabled;
@property (nonatomic) BOOL isDeselectDisabled;
@property (nonatomic) BOOL isSnapshotMode;
@property (weak, nonatomic) ContactTagData *tagData;

+ (double)descLabelFontSize;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)updateView;
- (void)layoutSubviews;
- (void)onRename;
- (void)customTableViewCellRecorderControl;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getReorderControlFrame;
- (void).cxx_destruct;

@end
