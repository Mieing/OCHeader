@class NSArray, NSData, NSString;

@interface IESMMSampleBufferInfo : IESMMObject

@property (retain, nonatomic) NSArray *quaternion;
@property (nonatomic) double brightness;
@property (retain, nonatomic) NSData *mattingMaskData;
@property (nonatomic) struct CGSize { double width; double height; } mattingMaskImageSize;
@property (retain, nonatomic) NSArray *matting_rect;
@property (nonatomic) double focalLength;
@property (nonatomic) long long videoTargetType;
@property (nonatomic) BOOL isPassThrough;
@property (nonatomic) long long mediaType;
@property (nonatomic) long long srcPts;
@property (retain, nonatomic) NSString *segmentID;

- (void)setOtherInfo;
- (void)setQuaternion;
- (void).cxx_destruct;
- (id)init;

@end
