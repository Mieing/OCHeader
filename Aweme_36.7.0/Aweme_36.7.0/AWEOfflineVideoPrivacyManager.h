@class NSTimer;

@interface AWEOfflineVideoPrivacyManager : NSObject

@property (nonatomic) BOOL isRequestOnAir;
@property (retain, nonatomic) NSTimer *videoPrivacyCheckTimer;

+ (id)sharedInstance;

- (void)handleConnectionChanged:(id)a0;
- (void)checkAllVideoPrivacy;
- (void)deleteInvalidResourceWithCheckResults:(id)a0;
- (void)timer_checkAllVideoPrivacy;
- (void).cxx_destruct;
- (void)resetTimer;
- (id)init;
- (void)setup;

@end
