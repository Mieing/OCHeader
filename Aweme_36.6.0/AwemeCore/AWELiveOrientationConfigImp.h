@class NSString;
@protocol IESLiveMonitor;

@interface AWELiveOrientationConfigImp : NSObject <IESLiveOrientationConfig>

@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enableLandscapeRight:(BOOL)a0;
- (void)enableLandScapeLeft:(BOOL)a0;
- (void).cxx_destruct;

@end
