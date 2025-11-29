@class AWEURLModel, NSString, AWELiveCameraPaidInfo, NSNumber, AWELiveStreamURLModel;

@interface AWELiveVSCameraInfo : AWEBaseApiModel

@property (nonatomic) long long cameraId;
@property (retain, nonatomic) NSString *cameraIdStr;
@property (retain, nonatomic) NSNumber *style;
@property (retain, nonatomic) AWELiveStreamURLModel *streamInfo;
@property (retain, nonatomic) NSString *matchId;
@property (nonatomic) BOOL isSubCamera;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *cover;
@property (retain, nonatomic) AWELiveCameraPaidInfo *cameraPaidInfo;

+ (id)coverURLJSONTransformer;
+ (id)streamInfoJSONTransformer;
+ (id)cameraPaidInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)toJsonString;

@end
