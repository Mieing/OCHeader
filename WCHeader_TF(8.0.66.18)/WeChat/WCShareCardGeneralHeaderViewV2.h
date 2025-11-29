@class WCShareCardJumpToFinderView, MMWebImageView, UIImage, NSString, CALayer, UIImageView, MMUIView, NSMutableArray, MMUILabel, MMUIButton;
@protocol WCShareCardGeneralCardHeaderV2Delegate;

@interface WCShareCardGeneralHeaderViewV2 : WCShareCardBaseHeaderView <WCShareCardJumpToFinderButtonDelegate>

@property (retain, nonatomic) NSMutableArray *textLabelArray;
@property (retain, nonatomic) NSMutableArray *textArray;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) MMUIView *headerTopHorizontalUIView;
@property (retain, nonatomic) MMUILabel *subTitleLabel;
@property (retain, nonatomic) MMWebImageView *headImageView;
@property (retain, nonatomic) MMWebImageView *certifiedIconImageView;
@property (retain, nonatomic) WCShareCardJumpToFinderView *jumpToFinderView;
@property (retain, nonatomic) MMUIView *lineView;
@property (retain, nonatomic) MMUIButton *shareCardImageUIView;
@property (retain, nonatomic) MMWebImageView *shareCardImageView;
@property (retain, nonatomic) MMWebImageView *shareCardPlayVideoImageView;
@property (retain, nonatomic) MMUIView *conditionView;
@property (retain, nonatomic) MMUIView *backView;
@property (retain, nonatomic) CALayer *maskLayer;
@property (nonatomic) int cardType;
@property (nonatomic) BOOL bIsGiftFromUserHeaderView;
@property (retain, nonatomic) UIImage *disableBgImg;
@property (retain, nonatomic) MMUILabel *displaySubTitleLabel;
@property (retain, nonatomic) MMUILabel *displayAuxTitleLabel;
@property (weak, nonatomic) id<WCShareCardGeneralCardHeaderV2Delegate> delegate;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (nonatomic) double viewWidth;
@property (nonatomic) UIImageView *cardQRImgView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewWidth:(double)a0 withCardSourceData:(id)a1 isGiftFromUserHeaderView:(BOOL)a2 isShareCard:(BOOL)a3 cardStatus:(int)a4 isNeedHideAccecptBtn:(BOOL)a5 delegate:(id)a6;
- (void)confiUIByData;
- (void)layoutSubviews;
- (double)viewHeight;
- (void)updateHeaderTopHorizontalUIView;
- (void)setAccessibilityLabelToView:(id)a0 fieldItem:(id)a1;
- (void)onWCShareCardJumpToFinderButtonClick;
- (void)onCardImgBtnClick:(id)a0;
- (BOOL)shouldShowConditionView;
- (double)calcUsedConditionHeight;
- (void)singleSureButtonDidSelected;
- (id)getSubTitleName;
- (id)getTitleName;
- (BOOL)hasFeedField;
- (BOOL)hasCertifiedIcon;
- (BOOL)hasHeadImage;
- (BOOL)hasJumpToFinder;
- (id)getVailDateStr;
- (double)headImgLen;
- (void).cxx_destruct;

@end
