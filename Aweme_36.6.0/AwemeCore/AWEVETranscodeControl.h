@class NSNumber, NSString, NSObject;
@protocol ACCEditVideoDataProtocol;

@interface AWEVETranscodeControl : NSObject <ACCCreativePathMessage>

@property (nonatomic) BOOL controlState;
@property (nonatomic) BOOL fromRecord;
@property (retain, nonatomic) NSNumber *pauseTime;
@property (nonatomic) double pauseDuration;
@property (nonatomic) BOOL transcoding;
@property (copy, nonatomic) NSString *scene;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *videoData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)exitCreativePath;
- (void)creativePathPageDidAppear:(unsigned long long)a0;
- (void)creativePathPageDidDisappear:(unsigned long long)a0;
- (void)creativePathPage:(unsigned long long)a0 info:(id)a1;
- (void)configSpeed;
- (void)managerSessionPause;
- (void)managerSessionResume;
- (void)managerSessionDynamic:(BOOL)a0;
- (void).cxx_destruct;
- (void)captureSessionDidStart:(id)a0;
- (id)init;
- (void)captureSessionDidStop:(id)a0;
- (void)dealloc;

@end
