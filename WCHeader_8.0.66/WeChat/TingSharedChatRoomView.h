@class MMListenCategoryItem, UIImageView, NSString, MMWebImageView, UIView, MMUILabel;

@interface TingSharedChatRoomView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMWebImageView *bgView;
@property (retain, nonatomic) UIImageView *maskLayerView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) MMUILabel *logoLabel;
@property (retain, nonatomic) MMWebImageView *headImgView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *authorNameLabel;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) MMUILabel *chatroomLabel;
@property (retain, nonatomic) UIView *logoLabelBgView;
@property (nonatomic) double textMarginTop;
@property (retain) NSString *headImgUrl;
@property (nonatomic) unsigned long long type;

+ (double)cardHeight;
+ (double)cardWidthForChat;
+ (double)cardWidthForMoment;

- (double)cardWidth;
- (int)fontModule;
- (id)titleFont;
- (id)authorNameFont;
- (id)logoFont;
- (id)chatroomLabelFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)configureLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)updateDisplayWithCategoryItem:(id)a0 andListenItem:(id)a1 closedState:(long long)a2;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;

@end
