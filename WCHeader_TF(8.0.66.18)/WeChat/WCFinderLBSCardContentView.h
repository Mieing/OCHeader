@class UILabel, MMWebImageView, FinderJumpInfo_LbsLifeCardStyle, WCFinderLBSCardWordingListView, NSString, UIImageView, MMUIButton, WCFinderJumpInfoLBSCardScoreView;
@protocol WCFinderLBSCardContentViewDelegate;

@interface WCFinderLBSCardContentView : UIView <MMWebImageViewDelegate>

@property (nonatomic) unsigned long long uiStyle;
@property (retain, nonatomic) FinderJumpInfo_LbsLifeCardStyle *cardStyle;
@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) UILabel *poiTitle;
@property (retain, nonatomic) WCFinderLBSCardWordingListView *firstWordingList;
@property (retain, nonatomic) WCFinderLBSCardWordingListView *secondWordingList;
@property (retain, nonatomic) WCFinderLBSCardWordingListView *recommendWordingList;
@property (retain, nonatomic) MMUIButton *favButton;
@property (retain, nonatomic) UIImageView *rightArrow;
@property (retain, nonatomic) UILabel *scoreLabel;
@property (retain, nonatomic) WCFinderJumpInfoLBSCardScoreView *scoreView;
@property (nonatomic) double layoutWidth;
@property (weak, nonatomic) id<WCFinderLBSCardContentViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)favButtonTitleWithStyle:(id)a0;
+ (id)poiTitleAttributedStringWithPOIName:(id)a0 poiNameWording:(id)a1;
+ (double)heightForCellWithStyle:(id)a0 width:(double)a1;

- (id)initWithStyle:(unsigned long long)a0 delegate:(id)a1;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)layoutUI;
- (void)updateWithStyle:(id)a0;
- (id)createPOIFavButton;
- (void)onFavBtnClicked:(id)a0;
- (void)onCardClicked:(id)a0;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;

@end
