@class NSArray, VEAIMomentScoreInfo;

@interface VEAIMomentContentInfo : NSObject

@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSArray *faceFeatures;
@property (retain, nonatomic) VEAIMomentScoreInfo *totalScoreInfo;
@property (retain, nonatomic) NSArray *scoreInfos;
@property (nonatomic) BOOL isPorn;
@property (nonatomic) BOOL isLeader;
@property (retain, nonatomic) NSArray *peopleIds;
@property (nonatomic) long long simId;

- (void).cxx_destruct;

@end
