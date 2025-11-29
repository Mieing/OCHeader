@class NSString, NSMutableArray, NSArray;

@interface MMLiveFaceTrackResultRecord : NSObject

@property (copy, nonatomic) NSString *tagName;
@property (retain, nonatomic) NSMutableArray *faceTrackResultList;
@property (retain) NSArray *normalizeFaceFeatureList;
@property (retain) NSArray *averTransformedLandmarks2DList;

- (id)initWithTagName:(id)a0;
- (void)addFaceTrackResult:(id)a0;
- (id)mostNthZScoreResult:(int)a0;
- (long long)resultCount;
- (void)computeNormalizeFaceFeature;
- (void)finish;
- (void)averageTransformedLandMark2D;
- (void)sortFaceTrackResults;
- (void).cxx_destruct;

@end
