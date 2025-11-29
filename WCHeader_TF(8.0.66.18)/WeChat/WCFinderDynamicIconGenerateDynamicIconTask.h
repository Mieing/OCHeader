@class WCFinderDynamicIconFetchTask, UIImage;

@interface WCFinderDynamicIconGenerateDynamicIconTask : WCFinderDynamicIconFetchTask

@property (retain, nonatomic) WCFinderDynamicIconFetchTask *darkIconTask;
@property (retain, nonatomic) WCFinderDynamicIconFetchTask *lightIconTask;
@property (retain, nonatomic) UIImage *lightImage;
@property (retain, nonatomic) UIImage *darkImage;

+ (id)taskWithDarkTask:(id)a0 lightTask:(id)a1;

- (void)_onLightImageFinish:(id)a0;
- (void)_onDarkImageFinish:(id)a0;
- (void)generageDynamicIcon;
- (void).cxx_destruct;

@end
