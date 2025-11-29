@class UIFont, GCLabelDynamicLayout;

@interface GCChatBaseCellModelCommonLayout : GCDynamicLayoutProvider

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentMarginInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } emoticonMarginInsets;
@property (nonatomic) double headImgTopOffset;
@property (nonatomic) double nameLineHeight;
@property (nonatomic) double nameLabelFontSize;
@property (retain, nonatomic) UIFont *nameLabelFont;
@property (nonatomic) double textFontSize;
@property (nonatomic) double textLineHeight;
@property (nonatomic) double roleLabelPadding;
@property (nonatomic) double roleLabelFontSize;
@property (nonatomic) double roleIconSize;
@property (nonatomic) double roleIconLabelSpace;
@property (nonatomic) double noticeLabelFontSize;
@property (nonatomic) double headImgWidth;
@property (nonatomic) double ticklePagWidth;
@property (nonatomic) double ticklePagHeight;
@property (nonatomic) double statusBgWidth;
@property (nonatomic) double statusImgWidth;
@property (nonatomic) double sendFailViewWidth;
@property (retain, nonatomic) GCLabelDynamicLayout *btmVoteTipLayout;
@property (nonatomic) double voteFameHeight;
@property (nonatomic) double choosenPublishBarHeight;
@property (retain, nonatomic) GCLabelDynamicLayout *channelLabelLayout;
@property (nonatomic) double cellChannelSharpImgSpace;
@property (nonatomic) double sharpImgWidth;
@property (nonatomic) double channelLabelBtmMargin;

- (id)init;
- (void).cxx_destruct;

@end
