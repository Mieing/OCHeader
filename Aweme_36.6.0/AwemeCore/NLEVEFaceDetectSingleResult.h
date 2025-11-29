@class NSArray;

@interface NLEVEFaceDetectSingleResult : NSObject

@property (nonatomic) int type;
@property (nonatomic) float bufferWidth;
@property (nonatomic) float bufferHeight;
@property (nonatomic) float yaw;
@property (nonatomic) float pitch;
@property (nonatomic) float roll;
@property (nonatomic) int action;
@property (nonatomic) int originX;
@property (nonatomic) int originY;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int faceID;
@property (nonatomic) float score;
@property (nonatomic) float eyeDist;
@property (nonatomic) unsigned int trackingCnt;
@property (retain, nonatomic) NSArray *points;
@property (retain, nonatomic) NSArray *pointsVisibility;

- (void).cxx_destruct;
- (id)init;

@end
