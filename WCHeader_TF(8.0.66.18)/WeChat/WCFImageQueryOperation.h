@class NSString;

@interface WCFImageQueryOperation : NSObject <WCFImageOperation>

@property (getter=isCancelled) BOOL cancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;

@end
