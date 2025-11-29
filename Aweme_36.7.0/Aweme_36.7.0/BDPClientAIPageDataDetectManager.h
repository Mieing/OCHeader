@class NSString;

@interface BDPClientAIPageDataDetectManager : NSObject <BDPClientAIPageDataDetectService, BDPService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initService;
- (BOOL)needUploadClientAIPageData:(id)a0;
- (id)pageDataFeatureWithPage:(id)a0;
- (BOOL)pageDataWebviewRequestUploadEnable;
- (BOOL)pageDataDetectEnable;
- (BOOL)pageDataUploadHashEnable;

@end
