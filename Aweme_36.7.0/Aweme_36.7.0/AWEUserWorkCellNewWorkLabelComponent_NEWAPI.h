@class NSString;

@interface AWEUserWorkCellNewWorkLabelComponent_NEWAPI : AWEUserWorkCellDiagnoseComponent_NEWAPI <AWEUserWorkCellComponentTrackProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)a0 context:(id)a1;
+ (id)jxNewWorksConfig;
+ (id)labelText;

- (id)trackParams;
- (void)onVideoPlayStart:(id)a0;
- (BOOL)dynamicComponent;
- (void)configWorkCellDiagnoseView:(id)a0;
- (id)initWithData:(id)a0 context:(id)a1;

@end
