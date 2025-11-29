@class RACSignal, RACSubject;

@interface AWEECommerceUploadViewModel : NSObject

@property (retain, nonatomic) RACSubject *commerceViewDidAppearSubject;
@property (retain, nonatomic) RACSubject *commerceCameraStartRenderSubject;
@property (retain, nonatomic) RACSignal *commerceViewDidAppearSignal;
@property (retain, nonatomic) RACSignal *commerceCameraStartRenderSignal;

- (void)sendCommerceViewDidAppearSignal;
- (void)sendCommerceCameraStartRenderSignal;
- (void).cxx_destruct;
- (void)dealloc;

@end
