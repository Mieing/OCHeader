@class NSString;

@interface SLIPreRenderCancelable : NSObject <SLICancelable>

@property (nonatomic) BOOL isCanceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;

@end
