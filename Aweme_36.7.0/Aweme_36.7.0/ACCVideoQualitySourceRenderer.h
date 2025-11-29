@class NSString, AWEVideoPublishViewModel;

@interface ACCVideoQualitySourceRenderer : NSObject <ACCVideoSourceRendererProtocol>

@property (weak, nonatomic) AWEVideoPublishViewModel *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
