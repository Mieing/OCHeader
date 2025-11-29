@class NSString;

@interface LCAudioDiagnosisInfo : NSObject

@property (nonatomic) long long route;
@property (copy, nonatomic) NSString *captureDeviceName;
@property (copy, nonatomic) NSString *playbackDeviceName;
@property (nonatomic) long long appState;

- (void).cxx_destruct;
- (id)description;

@end
