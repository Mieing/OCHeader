@class NSNumber, NSString;

@interface IESGCPCgSetXplayDebugInfoStreamingInfoModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *bitrate;
@property (retain, nonatomic) NSNumber *fps;
@property (copy, nonatomic) NSString *resolution;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
