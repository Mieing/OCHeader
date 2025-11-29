@class NSString, TXCDispatchQueue;

@interface TXCOtherCapturerFactory : NSObject <TXICapturerFactoryInterface>

@property (readonly, nonatomic) TXCDispatchQueue *queue;
@property (readonly, nonatomic) TXCDispatchQueue *outputQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithQueue:(id)a0 outputQueue:(id)a1;
- (id)capturerOfType:(int)a0 identifier:(id)a1;
- (void).cxx_destruct;

@end
