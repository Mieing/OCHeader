@class NSArray, NSMutableArray, WCFinderProfileCollectionListStyle;

@interface WCFinderProfileCollectionListLayout : NSObject

@property (nonatomic) BOOL allEpisodeButtonShow;
@property (nonatomic) BOOL nextEpisodeButtonShow;
@property (nonatomic) BOOL moreButtonShow;
@property (retain, nonatomic) WCFinderProfileCollectionListStyle *style;
@property (nonatomic) struct CGPoint { double x; double y; } moreButtonOrigin;
@property (nonatomic) double width;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } extraInsets;
@property (nonatomic) BOOL forceShowMoreButton;
@property (retain, nonatomic) NSArray *collectionInfos;
@property (retain, nonatomic) NSMutableArray *layoutItems;
@property (nonatomic) BOOL forbiddenEpisodeButton;

- (id)init;
- (id)initWithCollectionInfoList:(id)a0;
- (void)_setupState;
- (void)updateLayoutWidth:(double)a0 extraPadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)updateLayout;
- (double)displayHeight;
- (void)showNextEpisodeButton;
- (void)showAllEpisodeButton;
- (void)hideAllEpisodeButton;
- (struct CGPoint { double x0; double x1; })episodeButtonOrigin;
- (struct CGSize { double x0; double x1; })calculateTextSize:(id)a0;
- (id)displayCollectionName:(id)a0;
- (id)getLayoutItemWithCollectionInfo:(id)a0;
- (id)currentEpisodeButtonDisplayText;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsAdd:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 otherInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void).cxx_destruct;

@end
