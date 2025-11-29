@class HTSLiveVSCameraInfo, NSMutableDictionary;
@protocol IESLiveRoomService;

@interface IESLiveVRMultiCameraStore : NSObject

@property (retain, nonatomic) HTSLiveVSCameraInfo *subCameraInfo;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) int bizType;
@property (retain, nonatomic) NSMutableDictionary *logPBDict;

- (void)changeCamera;
- (id)getCurrentCameraVRLogInfo;
- (void)updateCameraInfoWithJsonStr:(id)a0;
- (void)clearCameraInfo;
- (void)updateMultiCameraWithRoom:(id)a0;
- (void).cxx_destruct;
- (id)initWithRoom:(id)a0;

@end
