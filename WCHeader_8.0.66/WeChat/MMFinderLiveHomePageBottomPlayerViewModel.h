@class NSString, WCFinderContact, MMFinderLiveTaskId;

@interface MMFinderLiveHomePageBottomPlayerViewModel : NSObject

@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSString *liveAnchorName;
@property (retain, nonatomic) NSString *liveTitleDescription;
@property (retain, nonatomic) WCFinderContact *anchorContact;
@property (nonatomic) unsigned long long playBtnStatus;
@property (nonatomic) struct CGSize { double width; double height; } liveContainerSize;
@property (nonatomic) double bottomPlayerViewHeight;
@property (nonatomic) double bottomPlayerViewTop;

- (id)initWithLiveTaskId:(id)a0;
- (void)playLive;
- (void)pauseLive;
- (void)onEnterForeground;
- (double)getLiveViewHeightPerWidthPercent;
- (void)adjustBottomPlayerSubviewsSize;
- (id)liveTask;
- (void).cxx_destruct;

@end
