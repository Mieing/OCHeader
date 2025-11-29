@class NSString, UIViewController, NSDictionary;

@interface AWECommonFeedSectionContext : NSObject

@property (weak, nonatomic) UIViewController *hostVC;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (nonatomic) struct CGPoint { double x; double y; } savedFeedContentOffset;
@property (copy, nonatomic) id /* block */ getBindedData;
@property (copy, nonatomic) id /* block */ getFeedOffset;
@property (copy, nonatomic) id /* block */ getScrollingSpeed;
@property (copy, nonatomic) id /* block */ getSectionIndex;
@property (copy, nonatomic) id /* block */ saveScrollingStateBlock;
@property (copy, nonatomic) id /* block */ restoreSavedScrollingStateBlock;
@property (copy, nonatomic) id /* block */ forceBecomeActiveBlock;
@property (copy, nonatomic) id /* block */ endForceBecomingActiveBlock;
@property (copy, nonatomic) id /* block */ reloadCurrentSectionBlock;
@property (copy, nonatomic) id /* block */ updateCurrentSectionLayoutBlock;
@property (copy, nonatomic) id /* block */ reloadCurrentSupplementaryViewBlock;
@property (copy, nonatomic) id /* block */ singleTapEnterAwemeDetailBlock;
@property (copy, nonatomic) id /* block */ singleTapEnterAwemeDetailWithExtraBlock;
@property (copy, nonatomic) id /* block */ singleTapEnterAwemeDetailWithPlayerBlock;
@property (copy, nonatomic) id /* block */ singleTapEnterAwemeDetailWithPlayerAndConfigBlock;
@property (copy, nonatomic) id /* block */ recalculateToAutoPlayBlock;
@property (copy, nonatomic) id /* block */ videoPlayerStartPlay;
@property (copy, nonatomic) id /* block */ videoPlayerDidEndBlock;
@property (copy, nonatomic) id /* block */ videoPlayerDidPlayErrorBlock;
@property (copy, nonatomic) id /* block */ willEnterFullScreenBlock;
@property (copy, nonatomic) id /* block */ scrollToOffsetY;
@property (copy, nonatomic) id /* block */ scrollToDisplayItemWithOffset;
@property (copy, nonatomic) id /* block */ videoSinglePlayedBlock;
@property (copy, nonatomic) id /* block */ cellStartShowBlock;

- (void).cxx_destruct;

@end
