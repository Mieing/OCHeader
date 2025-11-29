@class NSString;

@interface IESLiveGetRecordingStatusDataModel : IESLiveBridgeModel

@property (nonatomic) BOOL isRecording;
@property (copy, nonatomic) NSString *source;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
