@protocol FavTingPlayButtonDelegate;

@interface FavTingPlayButton : TingSharePlayButton

@property (weak, nonatomic) id<FavTingPlayButtonDelegate> favTingBtnDelegate;

- (id)categoryItem;
- (void).cxx_destruct;

@end
