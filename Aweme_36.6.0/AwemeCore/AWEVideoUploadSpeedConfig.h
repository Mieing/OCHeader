@class NSString;

@interface AWEVideoUploadSpeedConfig : NSObject

@property (copy, nonatomic) NSString *context;
@property (nonatomic) long long speed;
@property (nonatomic) long long threshold;

+ (id)configWithProbeManager:(id)a0 speedModel:(id)a1 fileMode:(BOOL)a2;

- (void).cxx_destruct;

@end
