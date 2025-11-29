@class HTSEventContext;

@interface IESLiveToolbarTracker : NSObject

@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)trackItemMotionEvent:(id)a0 withIdx:(unsigned long long)a1;
- (void)trackRemoveItemEvent:(id)a0 withIdx:(unsigned long long)a1;
- (void)trackAddItemEvent:(id)a0 withIdx:(unsigned long long)a1;
- (id)TrackIdTransformer:(id)a0;
- (void)trackTappedDynamicMoreToolsItemEvent:(id)a0 withIdx:(unsigned long long)a1;
- (void)trackTappedItem:(id)a0 type:(int)a1 groupId:(int)a2 withIdx:(unsigned long long)a3;
- (void)trackAddItem:(id)a0 type:(int)a1 groupId:(int)a2 withIdx:(unsigned long long)a3;
- (void)trackMoreToolClickWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
