@class NSArray, MMFinderLiveRelatedLiveParams;

@interface MMFinderLivePrimitiveParam : NSObject

@property (retain, nonatomic) NSArray *contentVMs;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) BOOL isInMainScene;
@property (nonatomic) long long tabType;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) MMFinderLiveRelatedLiveParams *relatedLiveParams;
@property (nonatomic) BOOL useAnchoredBypass;
@property (nonatomic) BOOL disableHistoryLives;
@property (nonatomic) struct CGSize { double width; double height; } mediaSize;
@property (nonatomic) BOOL isVideoSceneMode;
@property (nonatomic) BOOL targetHasBottomView;

- (void).cxx_destruct;

@end
