@class UILabel, NSMutableArray, MMWebImageView;

@interface GCMsgSheetCardCell : GCChatBaseCell

@property (retain, nonatomic) MMWebImageView *cardBgView;
@property (retain, nonatomic) MMWebImageView *rightImgView;
@property (retain, nonatomic) UILabel *headLabel;
@property (retain, nonatomic) NSMutableArray *labelViewArray;

+ (void)onCalculatLayoutInfo:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldBubbleViewClipsToBounds;
- (void)layoutSubviews;
- (void)configureWithCellModel:(id)a0;
- (id)bindMsgSheetCardCellModel;
- (void).cxx_destruct;

@end
