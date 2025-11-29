@class NSString;

@interface IESGCPPerfSamplerService_Douyin : NSObject <IESGCPPerfSamplerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startFPSSamplerWithScene:(id)a0 extraInfo:(id)a1;
- (void)stopFPSSamplerWithScene:(id)a0;

@end
