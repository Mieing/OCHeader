@class LLHalfContainerOffset;

@interface LLHalfContainerParams : NSObject

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
@property (retain, nonatomic) LLHalfContainerOffset *anchorOffset;
@property (retain, nonatomic) LLHalfContainerOffset *expandOffset;
@property (retain, nonatomic) LLHalfContainerOffset *maxUnfoldOffset;
@property (retain, nonatomic) LLHalfContainerOffset *ditoBodyContainerFirstNodeTopMargin;

- (id)validStateSet;
- (void).cxx_destruct;
- (id)init;

@end
