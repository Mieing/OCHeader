@class NSString;

@interface ILAHandleScanResult : NSObject

@property (copy, nonatomic) NSString *tag_result;

- (id)initWithOriginHandleResult:(struct shared_ptr<ILASDK::HandleScanResult> { struct HandleScanResult *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;

@end
