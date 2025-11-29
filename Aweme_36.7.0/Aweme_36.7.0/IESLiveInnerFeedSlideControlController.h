@class IESLiveInnerFeedContext, NSString;

@interface IESLiveInnerFeedSlideControlController : NSObject <IESLiveInnerFeedSlideControlService>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)delayDisableFeedHorizontalScroll;
- (BOOL)slideToNext:(BOOL)a0;
- (BOOL)slideToIndex:(long long)a0 withAnimation:(BOOL)a1;
- (BOOL)slideToLast:(BOOL)a0;
- (BOOL)isHorizontalScrollEnable;
- (void)enableFeedHorizontalScroll;
- (BOOL)isLandscapeToLandscapeEnable;
- (BOOL)isSupportLandscapeDataWith:(id)a0;
- (void)disableFeedHorizontalScroll;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)didSelectItem:(int)a0;

@end
