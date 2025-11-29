@class TBDistributerParameter;
@protocol TBRegionChangeDistributorDelegate;

@interface TBRegionChangeDistributor : NSObject

@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL byGestured;
@property (nonatomic) long long zoomCount;
@property (nonatomic) long long centerCount;
@property (nonatomic) long long rotationCount;
@property (nonatomic) long long overlookingCount;
@property (nonatomic) long long centerOffsetCount;
@property (nonatomic) BOOL isChanging;
@property (retain, nonatomic) TBDistributerParameter *zoomParameter;
@property (retain, nonatomic) TBDistributerParameter *centerParameter;
@property (weak, nonatomic) id<TBRegionChangeDistributorDelegate> delegate;
@property (readonly, nonatomic) BOOL isDuringChange;

- (BOOL)matchStatic;
- (void)notifyRegionWillChangeAnimated:(BOOL)a0 byGesture:(BOOL)a1;
- (void)notifyRegionDidChangeAnimated:(BOOL)a0 byGesture:(BOOL)a1;
- (void)notifyWillMoveAnimated:(BOOL)a0 byGesture:(BOOL)a1;
- (void)notifyDidMoveAnimated:(BOOL)a0 byGesture:(BOOL)a1;
- (void)notifyWillZoomAnimated:(BOOL)a0 byGesture:(BOOL)a1;
- (void)notifyDidZoomAnimated:(BOOL)a0 byGesture:(BOOL)a1;
- (void)registerOption:(unsigned long long)a0 animated:(BOOL)a1 byGesture:(BOOL)a2;
- (void)completeOption:(unsigned long long)a0;
- (void)reset;
- (id)init;
- (void).cxx_destruct;

@end
