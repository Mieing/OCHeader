@class NSString, MMFinderLiveGroupedBadgeView, UIImageView, UILabel, MMFinderLiveTrailingButtonTextView;

@interface MMFinderLiveConnectedMicBaseAudienceCellView : MMFinderLiveConnectedMicBaseUserCellView

@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) MMFinderLiveGroupedBadgeView *badgeView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *warningLabel;
@property (retain, nonatomic) UIImageView *wecoinImageView;
@property (nonatomic) unsigned long long price;
@property (retain, nonatomic) NSString *descText;
@property (nonatomic) BOOL shouldExpandDesc;
@property (retain, nonatomic) MMFinderLiveTrailingButtonTextView *trailingButtonTextView;
@property (copy, nonatomic) id /* block */ expandStateShouldChange;

+ (id)ReuseIdentifier;
+ (double)cellHeightWithDescText:(id)a0 expandDescIfNeeded:(BOOL)a1 cellWidth:(double)a2;
+ (id)genDescLabel;
+ (id)getStyleWithExpand:(BOOL)a0;

- (void)resetState;
- (void)layoutSubviews;
- (void)configBadgeView;
- (void)configNickNameLabelWithSearchText:(id)a0;
- (void)updateRightButton;
- (void)updateWithConnectMicUser:(id)a0 searchText:(id)a1 subTitle:(id)a2;
- (void)updateWithPaidPrice:(unsigned long long)a0 descText:(id)a1 warningText:(id)a2 expandDescIfNeeded:(BOOL)a3;
- (void)configSubTitleLabel;
- (void)configDescLabel;
- (void)configWarningLabelWithText:(id)a0;
- (void)configWecoinImageView;
- (void)layoutUI;
- (BOOL)showWecoinIconBeforeSubtitle;
- (void).cxx_destruct;

@end
