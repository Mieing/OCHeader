@class NSString;

@interface MVDownloadOperation : WCAsyncOperation

@property (copy, nonatomic) NSString *requestId;
@property (readonly, nonatomic) NSString *uuid;

- (id)init;
- (void).cxx_destruct;

@end
