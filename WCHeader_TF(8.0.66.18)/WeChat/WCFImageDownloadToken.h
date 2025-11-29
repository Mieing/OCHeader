@class NSString, NSHashTable;

@interface WCFImageDownloadToken : NSObject <WCFImageOperation>

@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (weak, nonatomic) id downloadOperationCancelToken;
@property (retain, nonatomic) NSHashTable *downloadOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOperations:(id)a0;
- (void)cancel;
- (void).cxx_destruct;

@end
