@class NSString, NSError;

@interface AWELivePhotoImageXUploadResponse : NSObject <IESLivePhotoImageXUploadResponse>

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *convertURLPath;
@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
