@class NSString;

@interface IESMMKeyFrameWrapper : NSObject <NSCopying>

@property (copy, nonatomic) NSString *keyFrameJsonString;
@property (nonatomic) unsigned long long keyFramePts;
@property (copy, nonatomic) NSString *videoTrackID;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
