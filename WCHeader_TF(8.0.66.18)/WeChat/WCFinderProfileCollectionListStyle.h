@class NSString, UIFont;

@interface WCFinderProfileCollectionListStyle : NSObject

@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } listViewPadding;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } listItemsPadding;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } collectionIconSize;
@property (readonly, nonatomic) double itemTitleIconMargin;
@property (readonly, nonatomic) double episodeBtnLeftMargin;
@property (readonly, nonatomic) NSString *allEpisodeBtnDisplayText;
@property (readonly, nonatomic) NSString *nextEpisodeBtnDisplayText;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } episodeButtonHitExpandSize;
@property (readonly, nonatomic) double moreBtnHorizontalPadding;
@property (readonly, nonatomic) NSString *moreBtnDisplayText;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } moreButtonHitExpandSize;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } collectionItemHitExpandSize;

@end
