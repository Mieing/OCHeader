@class NSString;

@interface IESLiveSubscription : NSObject <IESLiveSubscription>

@property BOOL isSign;
@property (getter=isDisposed) BOOL disposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dispose;

@end
