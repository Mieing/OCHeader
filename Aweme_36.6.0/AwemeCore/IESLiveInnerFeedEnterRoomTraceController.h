@class IESLiveInnerFeedContext, NSString;

@interface IESLiveInnerFeedEnterRoomTraceController : NSObject <IESLiveInnerFeedDisplayAction, IESLiveInnerFeedDataControlAction>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedWillDisplayObject:(id)a0 atIndex:(long long)a1;
- (void)innerFeedWillMountObject:(id)a0 atIndex:(long long)a1 currentIndex:(long long)a2;
- (void)innerFeedDidMountObject:(id)a0 atIndex:(long long)a1 lastIndex:(long long)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
