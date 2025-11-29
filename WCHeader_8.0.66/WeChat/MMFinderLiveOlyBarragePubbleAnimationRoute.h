@class NSMutableArray;

@interface MMFinderLiveOlyBarragePubbleAnimationRoute : NSObject

@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (retain, nonatomic) NSMutableArray *positionValues;
@property (retain, nonatomic) NSMutableArray *opacityValues;
@property (retain, nonatomic) NSMutableArray *scaleValues;
@property (retain, nonatomic) NSMutableArray *timeValues;
@property (nonatomic) double duration;

- (void).cxx_destruct;

@end
