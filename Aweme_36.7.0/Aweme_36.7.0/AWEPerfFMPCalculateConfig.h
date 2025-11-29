@class NSArray;

@interface AWEPerfFMPCalculateConfig : NSObject

@property (nonatomic) double rateThreshold;
@property (nonatomic) double pixelDiffThreshold;
@property (nonatomic) BOOL isInnerViewFMPEnabled;
@property (copy, nonatomic) NSArray *meaningfulClassNames;
@property (nonatomic) double timeThreshold;
@property (nonatomic) BOOL isEnableFMPViewDiff;

- (void).cxx_destruct;

@end
