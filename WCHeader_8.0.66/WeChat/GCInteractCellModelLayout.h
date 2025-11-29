@class GCLabelDynamicLayout;

@interface GCInteractCellModelLayout : GCDynamicLayoutProvider

@property (nonatomic) double topMargin;
@property (nonatomic) double headWidth;
@property (nonatomic) double avatarToTitleLandSpace;
@property (retain, nonatomic) GCLabelDynamicLayout *titleLabelLayout;
@property (nonatomic) double titleToActionDescSpace;
@property (retain, nonatomic) GCLabelDynamicLayout *actionDescLabelLayout;
@property (nonatomic) double actionDescToActionTextSpace;
@property (retain, nonatomic) GCLabelDynamicLayout *actionTextLayout;
@property (nonatomic) double actionTextToQuoteSpace;
@property (retain, nonatomic) GCLabelDynamicLayout *quoteLayout;
@property (retain, nonatomic) GCLabelDynamicLayout *actionBtnLayout;
@property (nonatomic) double actionBtnUpSpace;
@property (nonatomic) double rightImgWidth;
@property (retain, nonatomic) GCLabelDynamicLayout *rightFollowBtnLayout;
@property (retain, nonatomic) GCLabelDynamicLayout *wechatNickLabelLayout;
@property (retain, nonatomic) GCLabelDynamicLayout *markLabelLayout;

- (id)init;
- (void).cxx_destruct;

@end
