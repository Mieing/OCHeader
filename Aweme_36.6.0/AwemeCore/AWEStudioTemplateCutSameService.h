@class NSString;

@interface AWEStudioTemplateCutSameService : NSObject <AWEStudioTemplateCutSameServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentSupportFeatureBits;
- (BOOL)isVideocutInstalled;
- (id)currentCutsameVersion;
- (id)videoCutSameMockSDKVersion;
- (void)jumpToTemplateCreatorActivityH5Page;

@end
