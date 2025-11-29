@class TBMapCommonCounter;

@interface QUniversalMapCounter : NSObject

@property (retain, nonatomic) TBMapCommonCounter *worldMapCounter;
@property (retain, nonatomic) TBMapCommonCounter *customLayerCounter;
@property (retain, nonatomic) TBMapCommonCounter *indoorCounter;
@property (retain, nonatomic) TBMapCommonCounter *darkModeCounter;
@property (retain, nonatomic) TBMapCommonCounter *pointEventCounter;
@property (retain, nonatomic) TBMapCommonCounter *heatMapCounter;
@property (retain, nonatomic) TBMapCommonCounter *honeyCombHeatCounter;
@property (retain, nonatomic) TBMapCommonCounter *arcOverlayCounter;
@property (retain, nonatomic) TBMapCommonCounter *trailCounter;
@property (retain, nonatomic) TBMapCommonCounter *scatterCounter;
@property (retain, nonatomic) TBMapCommonCounter *scatterBitmapCounter;
@property (retain, nonatomic) TBMapCommonCounter *groundOverlayCounter;
@property (retain, nonatomic) TBMapCommonCounter *aoiLayerCounter;
@property (retain, nonatomic) TBMapCommonCounter *offlineMapCounter;

- (id)init;
- (void).cxx_destruct;

@end
