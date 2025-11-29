@class NSString, FBxeme, NSMutableURLRequest;

@interface AWECFSkunk : NSObject <BDDYCMultipartFormData>

@property (nonatomic) unsigned long long stringEncoding;
@property (copy, nonatomic) NSMutableURLRequest *request;
@property (copy, nonatomic) NSString *boundary;
@property (retain, nonatomic) FBxeme *bodyStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURLRequest:(id)a0 stringEncoding:(unsigned long long)a1;
- (id)requestByFinalizingMultipartFormData;
- (BOOL)bd_targetViewControllerForAction:(id)a0 name:(id)a1 fileName:(id)a2 mimeType:(id)a3 error:(id *)a4;
- (void)bd_bdtextxxx:(id)a0 body:(id)a1;
- (void)bd_setNeedsUserInterfaceAppearanceUpdate:(id)a0 name:(id)a1;
- (BOOL)bd_targetViewControllerForAction:(id)a0 name:(id)a1 error:(id *)a2;
- (void)bd_showViewController:(id)a0 name:(id)a1 fileName:(id)a2 length:(long long)a3 mimeType:(id)a4;
- (void)bd_showDetailViewController:(id)a0 name:(id)a1 fileName:(id)a2 mimeType:(id)a3;
- (void)bd_attemptRotationToDeviceOrientation:(id)a0 name:(id)a1;
- (void)bd_willRotateToInterfaceOrientation:(unsigned long long)a0 delay:(double)a1;
- (void).cxx_destruct;

@end
