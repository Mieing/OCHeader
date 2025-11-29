@class GCLabelDynamicLayout;

@interface GameNoticeHalfScreenLayout : GCDynamicLayoutProvider

@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (retain, nonatomic) GCLabelDynamicLayout *titleLabelLayout;
@property (nonatomic) struct CGSize { double width; double height; } additionalIconSize;
@property (retain, nonatomic) GCLabelDynamicLayout *headLabelLayout;
@property (retain, nonatomic) GCLabelDynamicLayout *additionalTitleLabelLayout;
@property (retain, nonatomic) GCLabelDynamicLayout *additionalSubTitleLabelLayout;
@property (retain, nonatomic) GCLabelDynamicLayout *additionalBtnLayout;
@property (retain, nonatomic) GCLabelDynamicLayout *checkBtnLayout;

- (id)init;
- (void).cxx_destruct;

@end
