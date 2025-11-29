@class NSArray;

@interface MMLiveFaceTrackOutputData : NSObject

@property (retain, nonatomic) NSArray *faceFeatureList;
@property (retain, nonatomic) NSArray *landmarks2DList;

- (void).cxx_destruct;

@end
