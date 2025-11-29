@class NSString, NSArray;

@interface IntelligentFaceClusterItem : MMObject

@property (retain, nonatomic) NSString *imgKey;
@property (nonatomic) int faceIdx;
@property (retain, nonatomic) NSArray *arrPartConfidence;
@property (nonatomic) float zScore;
@property (nonatomic) unsigned long long labelId;
@property (retain, nonatomic) NSArray *arrFaceFeature;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } faceRect;
@property (nonatomic) unsigned int updateStatue;
@property (retain, nonatomic) NSString *faceClusterFilePathId;
@property (retain, nonatomic) NSString *mediaFilePath;
@property (nonatomic) double faceImageWidth;
@property (nonatomic) double faceImageHeight;
@property (retain, nonatomic) NSArray *arrfacePoint;
@property (retain, nonatomic) NSArray *arrL2NormFaceFeature;

- (void)copyFieldFromDbFaceClusterItem:(id)a0;
- (void).cxx_destruct;

@end
