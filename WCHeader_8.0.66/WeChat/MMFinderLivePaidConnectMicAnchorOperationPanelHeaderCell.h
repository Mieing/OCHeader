@class UILabel, RichTextView, NSString;

@interface MMFinderLivePaidConnectMicAnchorOperationPanelHeaderCell : UITableViewCell <ILinkEventExt>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) RichTextView *summaryTextView;
@property (copy, nonatomic) id /* block */ modifyPaidConnectMicSettingAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ReuseIdentifier;
+ (double)cellHeightWithConnectPrice:(unsigned long long)a0 serviceCount:(unsigned long long)a1 cellWidth:(double)a2;
+ (id)genSummaryRichTextView;
+ (id)cellTitleWithServiceCount:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })titleLabelSizeWithText:(id)a0 textFont:(id)a1 andMaxWidth:(double)a2;
+ (id)cellTextWithConnectPrice:(unsigned long long)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configWithConnectPrice:(unsigned long long)a0 serviceCount:(unsigned long long)a1;
- (void)initViews;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
