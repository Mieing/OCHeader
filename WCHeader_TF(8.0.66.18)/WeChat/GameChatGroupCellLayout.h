@class GCLabelDynamicLayout;

@interface GameChatGroupCellLayout : GCDynamicLayoutProvider

@property (retain, nonatomic) GCLabelDynamicLayout *topLabelConfig;
@property (retain, nonatomic) GCLabelDynamicLayout *secondaryLabelConfig;
@property (retain, nonatomic) GCLabelDynamicLayout *onlyLabelConfig;
@property (retain, nonatomic) GCLabelDynamicLayout *pinLabelConfig;
@property (nonatomic) double onlyLabelMargin;
@property (nonatomic) double spaceBetweenTickLabel;
@property (nonatomic) struct CGSize { double width; double height; } conditionTickSize;
@property (retain, nonatomic) GCLabelDynamicLayout *rightBtnConfig;
@property (nonatomic) double rightBtnAdditionSpace;
@property (nonatomic) double tagLandSpace;
@property (nonatomic) double tagVerticalSpace;
@property (nonatomic) double labelSpace;
@property (nonatomic) double conditionContainerSpace;
@property (nonatomic) double addtionalConditonSpace;
@property (nonatomic) int maxCondtionNumLine;
@property (nonatomic) int maxTagNumLine;
@property (nonatomic) struct CGSize { double width; double height; } tagImgSize;
@property (nonatomic) double tagImgStrMargin;
@property (nonatomic) double conditionTagSpace;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tagInsets;
@property (retain, nonatomic) GCLabelDynamicLayout *tagLabelConfig;
@property (nonatomic) double tagLineHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) double imgViewHeight;
@property (nonatomic) double moreHeightWhenHasTag;
@property (nonatomic) double bulletMsgViewHeight;

- (id)init;
- (void).cxx_destruct;

@end
