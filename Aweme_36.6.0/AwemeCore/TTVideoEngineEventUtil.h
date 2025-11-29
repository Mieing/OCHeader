@class NSString;

@interface TTVideoEngineEventUtil : NSObject

@property (nonatomic) float currentVolume;
@property (nonatomic) BOOL volumeSet;
@property (nonatomic) long long screenWidth;
@property (nonatomic) long long screenHeight;
@property (nonatomic) float screenScale;
@property (copy, nonatomic) NSString *lastPlaySessionId;
@property (copy, nonatomic) NSString *appSessionId;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)volumeChanged:(id)a0;

@end
