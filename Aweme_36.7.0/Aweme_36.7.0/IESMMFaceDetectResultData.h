@class NSArray;

@interface IESMMFaceDetectResultData : IESMMAlgorithmResultData

@property (nonatomic) double bufferWidth;
@property (nonatomic) double bufferHeight;
@property (nonatomic) double yaw;
@property (nonatomic) double pitch;
@property (nonatomic) double roll;
@property (nonatomic) unsigned long long action;
@property (nonatomic) double originX;
@property (nonatomic) double originY;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long faceID;
@property (nonatomic) double score;
@property (nonatomic) double eyeDist;
@property (nonatomic) long long trackingCnt;
@property (retain, nonatomic) NSArray *points;
@property (retain, nonatomic) NSArray *pointsVisibility;

- (void).cxx_destruct;
- (id)init;

@end
