@class NSString;

@interface BDPNativeGameBlankDetectionResultModel : NSObject

@property (nonatomic) BOOL isBlank;
@property (nonatomic) BOOL isAbnormalRender;
@property (nonatomic) long long snapshotDuration;
@property (nonatomic) long long blankDetectionDuration;
@property (nonatomic) long long totalDuration;
@property (copy, nonatomic) NSString *partialStoreID;
@property (nonatomic) long long abnormalRenderDetectionDuration;

- (void).cxx_destruct;

@end
