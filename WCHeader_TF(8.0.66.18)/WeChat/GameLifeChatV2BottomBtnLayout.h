@class GCLabelDynamicLayout;

@interface GameLifeChatV2BottomBtnLayout : GCDynamicLayoutProvider

@property (nonatomic) struct CGSize { double width; double height; } imgSize;
@property (nonatomic) double imgTitleMargin;
@property (retain, nonatomic) GCLabelDynamicLayout *btnLabelLayout;
@property (nonatomic) double btnTitleVerticalMargin;
@property (nonatomic) double btnHeight;
@property (nonatomic) struct CGSize { double width; double height; } thinImgSize;
@property (nonatomic) double thinImgTopMargin;
@property (nonatomic) double thinImgBtnSpace;
@property (nonatomic) double thinBtnHeight;
@property (retain, nonatomic) GCLabelDynamicLayout *noticeLabelLayout;

- (id)init;
- (void).cxx_destruct;

@end
