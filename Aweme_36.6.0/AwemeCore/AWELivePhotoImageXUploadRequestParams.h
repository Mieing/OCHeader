@class NSString, NSNumber;

@interface AWELivePhotoImageXUploadRequestParams : NSObject <IESLivePhotoImageXUploadRequestParams>

@property (copy, nonatomic) NSString *accessKeyId;
@property (copy, nonatomic) NSString *secretAccessKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *serviceId;
@property (copy, nonatomic) NSString *hostName;
@property (retain, nonatomic) NSNumber *sliceSize;
@property (retain, nonatomic) NSNumber *socketNum;
@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSString *convertURLPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
