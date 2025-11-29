@class NSArray, VEAIMomentC3Feature, NSData, NSMutableArray, VEAIMomentScoreInfo;

@interface VEAIMomentBIMResult : NSObject

@property (retain, nonatomic) NSMutableArray *faceVertifyFeatures;
@property (retain, nonatomic) NSArray *faceFeatures;
@property (retain, nonatomic) NSArray *momentTags;
@property (nonatomic) BOOL isPorn;
@property (nonatomic) BOOL isLeader;
@property (retain, nonatomic) VEAIMomentScoreInfo *scoreInfo;
@property (retain, nonatomic) NSArray *scoreInfos;
@property (retain, nonatomic) NSData *similarityData;
@property (retain, nonatomic) NSArray *reframeInfos;
@property (retain, nonatomic) VEAIMomentC3Feature *c3Feature;

- (void).cxx_destruct;

@end
