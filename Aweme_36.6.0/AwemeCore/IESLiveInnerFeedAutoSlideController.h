@class IESLiveFinishedRoomAutoSlider, NSString, NSNumber, IESLiveInnerFeedContext;

@interface IESLiveInnerFeedAutoSlideController : NSObject <IESLiveInnerFeedDataControlAction>

@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) IESLiveFinishedRoomAutoSlider *autoSlider;
@property (retain, nonatomic) NSNumber *deleteInnerFeedPrestreamRoomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedWillMountObject:(id)a0 atIndex:(long long)a1 currentIndex:(long long)a2;
- (void)innerFeedDidMountObject:(id)a0 atIndex:(long long)a1 lastIndex:(long long)a2;
- (void)innerFeedWillCloseItem:(id)a0 atIndex:(long long)a1 withType:(unsigned long long)a2;
- (void)addDeleteObserver;
- (void)deleteInnerFeedPrestreamCelIfNeed:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
