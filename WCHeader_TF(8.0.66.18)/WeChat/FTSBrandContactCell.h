@class MMBrandHeadImageView, UIView, NSArray, AttributeLabel, SearchMatchTip, NSString, WCTagsView, CContact;

@interface FTSBrandContactCell : MMMultiMenuTableViewCell

@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) SearchMatchTip *matchTip;
@property (retain, nonatomic) NSArray *arrKeyword;
@property (retain, nonatomic) MMBrandHeadImageView *brandHeadImageView;
@property (retain, nonatomic) AttributeLabel *displayNameLabel;
@property (retain, nonatomic) AttributeLabel *detailLabel;
@property (nonatomic) BOOL bAsTopHit;
@property (nonatomic) BOOL bShouldHighlight;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) WCTagsView *tagsView;
@property (retain, nonatomic) NSString *searchText;
@property (nonatomic) double cellHeight;
@property (nonatomic) BOOL bHideCerIcon;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)setContextMenuEnabled:(BOOL)a0;
- (void)updateContact:(id)a0;
- (void)updateContact:(id)a0 matchTip:(id)a1 searchText:(id)a2 keywords:(id)a3 asTopHit:(BOOL)a4;
- (void)updateStatus;
- (id)getTopHitDescrpition;
- (void)layoutSubviews;
- (void)accessibilityElementDidBecomeFocused;
- (void).cxx_destruct;

@end
