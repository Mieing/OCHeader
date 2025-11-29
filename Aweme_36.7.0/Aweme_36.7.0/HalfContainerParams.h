@class HalfContainerOffset;

@interface HalfContainerParams : NSObject

@property (nonatomic) double initialHalfContainerRatio;
@property (nonatomic) BOOL hideable;
@property (nonatomic) BOOL disableCloseGesture;
@property (nonatomic) BOOL supportFullToHalf;
@property (nonatomic) BOOL mustCloseToHalf;
@property (nonatomic) BOOL alwaysHalfScreen;
@property (nonatomic) BOOL alwaysFullScreen;
@property (nonatomic) BOOL enableOverScroll;
@property (nonatomic) BOOL enableFling;
@property (nonatomic) double slowClosePercent;
@property (nonatomic) double fastCloseCoefficient;
@property (nonatomic) double scrollOffsetToUnfold;
@property (nonatomic) double scrollOffsetToFold;
@property (retain, nonatomic) HalfContainerOffset *anchorOffset;
@property (retain, nonatomic) HalfContainerOffset *expandOffset;
@property (retain, nonatomic) HalfContainerOffset *maxUnfoldOffset;
@property (retain, nonatomic) HalfContainerOffset *ditoBodyContainerFirstNodeTopMargin;

- (id)validStateSet;
- (void).cxx_destruct;
- (id)init;

@end
