@class NSString, WCFImageManager;
@protocol WCFImageOperation;

@interface WCFImageOperation : NSObject <WCFImageOperation>

@property (getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) id<WCFImageOperation> cacheOperation;
@property (retain, nonatomic) id<WCFImageOperation> loaderOperation;
@property (weak, nonatomic) WCFImageManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)reset;
- (void).cxx_destruct;

@end
