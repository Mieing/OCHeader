@class NSString, HMDLoadUploadContext;

@interface HMDMetricKitLoadLaunchUploader : NSObject <HMDLoadUploadBackgroundSessionProtocol>

@property (retain, nonatomic) HMDLoadUploadContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uploaderWithContext:(id)a0;

- (void)uploadTaskFinishWithIdentifier:(id)a0 success:(BOOL)a1;
- (id)writeDataToFile:(id)a0 fileName:(id)a1;
- (void)uploadDiagnosticPayloadIfNeed:(id)a0 currentData:(id)a1 currentFileName:(id)a2 shouldFixSegment:(BOOL)a3;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
