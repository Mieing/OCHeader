@class TXCAppScreenCapturer, NSString, TXCIOSScreenCapturer, TXCDispatchQueue;

@interface TXCiOSScreenCapturerFactory : NSObject <TXICapturerFactoryInterface>

@property (retain, nonatomic) TXCAppScreenCapturer *appCapturer;
@property (retain, nonatomic) TXCIOSScreenCapturer *screenCapturer;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (readonly, nonatomic) TXCDispatchQueue *queue;
@property (readonly, nonatomic) TXCDispatchQueue *outputQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
