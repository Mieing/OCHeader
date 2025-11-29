@class NSString;

@interface AWELivePhotoImageXUploadRequestImpl : NSObject <IESLivePhotoImageXUploadRequestService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestWithImageData:(id)a0 params:(id)a1 responseHandler:(id /* block */)a2;
- (id)createParamsWithAccessKeyId:(id)a0 secretAccessKey:(id)a1 sessionToken:(id)a2 serviceId:(id)a3 hostName:(id)a4 sliceSize:(id)a5 socketNum:(id)a6 traceId:(id)a7 convertURLPath:(id)a8;

@end
