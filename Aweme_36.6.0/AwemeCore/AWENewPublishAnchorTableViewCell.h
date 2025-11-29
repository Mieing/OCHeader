@class UIImageView, UILabel, UIView;

@interface AWENewPublishAnchorTableViewCell : AWENewPublishTableCell

@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIImageView *loadingView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIView *accessibilityView;

+ (BOOL)shouldClearAccessLabelTextWithTitle:(id)a0 tag:(id)a1 accessLabelText:(id)a2;

- (void)addSubviewsForContentView;
- (void)updateTagLabel:(id)a0;
- (void).cxx_destruct;
- (void)updateAccessibilityLabel;

@end
