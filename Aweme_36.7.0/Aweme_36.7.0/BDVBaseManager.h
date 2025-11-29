@class NSString, NSPointerArray, NSMutableSet, UIView, BDVConfig;
@protocol BDVDuplicateTrackStrategy;

@interface BDVBaseManager : NSObject

@property (readonly, nonatomic) BOOL trackerState;
@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) NSPointerArray *coverViewArray;
@property (retain, nonatomic) NSMutableSet *trackedIdentifySet;
@property (readonly, nonatomic) BOOL trackerState;
@property (retain, nonatomic) BDVConfig *config;
@property (retain, nonatomic) id<BDVDuplicateTrackStrategy> duplicateTrackStrategy;
@property (copy, nonatomic) NSString *monitorName;

- (void)startTracker;
- (void)checkViewVisible;
- (void)removeAllTrackedIdentify;
- (void)addCoverView:(id)a0;
- (void)removeCoverView:(id)a0;
- (void)removeTrackedIdentify:(id)a0;
- (void)endTracker;
- (id)coverRectArrayFromCoverView;
- (BOOL)isTrackedIdentify:(id)a0;
- (void)addTrackedIdentify:(id)a0;
- (BOOL)isStarted;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
