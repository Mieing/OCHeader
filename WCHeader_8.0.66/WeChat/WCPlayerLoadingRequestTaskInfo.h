@class WCPlayerLoadingRequest;

@interface WCPlayerLoadingRequestTaskInfo : NSObject

@property (nonatomic) int taskSeq;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } dataRange;
@property (nonatomic) float downloadSec;
@property (retain, nonatomic) WCPlayerLoadingRequest *loadingRequest;

- (id)initWithSeq:(int)a0;
- (int)requestSeq;
- (id)description;
- (void).cxx_destruct;

@end
