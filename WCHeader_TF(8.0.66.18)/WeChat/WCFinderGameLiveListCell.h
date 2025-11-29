@class AttributeLabel, UIImageView, UILabel, UIView, MMWebImageView;
@protocol WCFinderGameLiveListCellDelegate;

@interface WCFinderGameLiveListCell : MMTableViewCell

@property (retain, nonatomic) UIView *functionContentView;
@property (retain, nonatomic) AttributeLabel *gameName;
@property (retain, nonatomic) UILabel *miniGameLabel;
@property (retain, nonatomic) MMWebImageView *gameIconView;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIView *checkIconView;
@property (nonatomic) BOOL isSelectGame;
@property (retain, nonatomic) UIImageView *selectStateImg;
@property (weak, nonatomic) id<WCFinderGameLiveListCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
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
