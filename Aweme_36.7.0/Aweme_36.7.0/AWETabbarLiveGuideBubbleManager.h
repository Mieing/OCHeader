@class AWEBubble;

@interface AWETabbarLiveGuideBubbleManager : NSObject

@property (nonatomic) BOOL shouldShowLiveGuideBubble;
@property (retain, nonatomic) AWEBubble *liveGuideBubbleView;

- (void)removeLiveGuideBubble;
- (void)showliveGuideBubbleIfNeed;
- (BOOL)_canShowLiveGuideBubble;
- (void).cxx_destruct;
- (id)init;

@end
