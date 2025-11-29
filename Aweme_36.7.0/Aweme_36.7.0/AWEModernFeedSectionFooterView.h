@class AWEModernFeedCellSeparatorModel, NSString, UIImageView, UILabel, UIView, UIButton;
@protocol AWEModernFeedCellFrameProtocol, AWEAdMoreLinkView;

@interface AWEModernFeedSectionFooterView : UITableViewHeaderFooterView <AWESearchCachalotCardViewProtocol, AWEModernFeedSectionFooterViewProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *seperationView;
@property (retain, nonatomic) UIView *bottomSeperationLine;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIButton *moreBtn;
@property (retain, nonatomic) UIView<AWEAdMoreLinkView> *adTagView;
@property (retain, nonatomic) UILabel *browseTipLabel;
@property (nonatomic) struct CGSize { double width; double height; } browseLabelSize;
@property (retain, nonatomic) UIImageView *spotImageView;
@property (retain, nonatomic) UIView *tagBackgroundView;
@property (nonatomic) long long seperationType;
@property (retain, nonatomic) id<AWEModernFeedCellFrameProtocol> cellFrame;
@property (retain, nonatomic) AWEModernFeedCellSeparatorModel *separatorModel;
@property (copy, nonatomic) NSString *browseHistoryTip;
@property (copy, nonatomic) NSString *referString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;
+ (BOOL)doubleColumnExperienceOptimize;
+ (id)getBottomSeparatorModelWithCellModel:(id)a0;
+ (double)footerHeightForCellModel:(id)a0;
+ (BOOL)shouldShowTimeInFooterViewForFrame:(id)a0;
+ (BOOL)shouldShowAdTag:(id)a0;
+ (id)identifier;

- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)moreBtnClicked:(id)a0;
- (void)LayoutBottomSeperationLine;
- (void)showSearchAdSpotIfNeeded;
- (void)setQualityStyleBackground;
- (unsigned long long)displayTypeForFooterView;
- (void)showXiGuaShare:(BOOL)a0;
- (void)updateAdTagWithModel:(id)a0 offsetY:(double)a1;
- (void)showXiguaVideoSharePanel;
- (BOOL)shouldShowAdLearnMoreLynxButtonWithCellFrame:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;

@end
