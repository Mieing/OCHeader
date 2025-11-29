@class MMFinderLiveGameSearchUserInfo, NSString, UILabel, MMWebImageView;

@interface MMLiveGameRecentlyPalyedCollectionCell : UICollectionViewCell

@property (retain, nonatomic) MMWebImageView *gameIconView;
@property (retain, nonatomic) UILabel *gameLabel;
@property (retain, nonatomic) UILabel *miniGameLabel;
@property (retain, nonatomic) MMFinderLiveGameSearchUserInfo *dataItem;
@property (retain, nonatomic) NSString *gameLabelText;
@property (retain, nonatomic) NSString *gameIconUrl;
@property (nonatomic) BOOL isMiniGame;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })getCellSize;

- (void)layoutSubviews;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
