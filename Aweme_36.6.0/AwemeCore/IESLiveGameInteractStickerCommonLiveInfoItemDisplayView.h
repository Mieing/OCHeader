@class IESLiveGameInteractStickerTemplate01LiveInfoItem, UILabel, UIView;

@interface IESLiveGameInteractStickerCommonLiveInfoItemDisplayView : UIView

@property (retain, nonatomic) IESLiveGameInteractStickerTemplate01LiveInfoItem *itemInfo;
@property (nonatomic) BOOL showSplitLine;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *tagLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 itemInfo:(id)a1 showSplitLine:(BOOL)a2;
- (void)setItemInfo:(id)a0 showSplitLine:(BOOL)a1;
- (void)setupSubViews;
- (void).cxx_destruct;

@end
