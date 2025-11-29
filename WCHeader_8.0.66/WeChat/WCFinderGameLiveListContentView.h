@class AttributeLabel, UIImageView, MMFinderLiveGameUserInfo, UILabel, UIView, MMWebImageView;

@interface WCFinderGameLiveListContentView : UIView

@property (retain, nonatomic) UIView *functionContentView;
@property (retain, nonatomic) AttributeLabel *gameName;
@property (retain, nonatomic) UILabel *miniGameLabel;
@property (retain, nonatomic) MMWebImageView *gameIconView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIView *checkIconView;
@property (nonatomic) BOOL isSelectGame;
@property (retain, nonatomic) UIImageView *selectStateImg;
@property (retain, nonatomic) MMFinderLiveGameUserInfo *gameUserInfo;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)prepareForReuse;
- (void)updateWithGameInfo:(id)a0 isSelect:(BOOL)a1;
- (void)drawSeparator;
- (void)removeSeparator;
- (void)toggle;
- (void)unToggle;
- (void)updateWithGameInfo:(id)a0 searchText:(id)a1;
- (void)updateCellWithRectCorner:(unsigned long long)a0;
- (void)cleanLayer;
- (void).cxx_destruct;

@end
