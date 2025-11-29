@class RTVXRContainerLayoutAttributesSnapshot;

@interface RTVNarrowWindowLayoutContext : NSObject

@property (readonly, nonatomic) long long enableGestureTypes;
@property (readonly, nonatomic) BOOL attachCorner;
@property (readonly, nonatomic) BOOL useDefaultSafeArea;
@property (retain, nonatomic) RTVXRContainerLayoutAttributesSnapshot *snapshot;
@property (nonatomic) BOOL initialApply;
@property (nonatomic) BOOL reserveLastState;
@property (nonatomic) BOOL initialNarrowDrawerState;

- (id)initWithEnableGestureTypes:(long long)a0 attachCorner:(BOOL)a1 useDefaultSafeArea:(BOOL)a2;
- (void).cxx_destruct;

@end
