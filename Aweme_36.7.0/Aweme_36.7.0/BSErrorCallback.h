@class NSString;

@interface BSErrorCallback : NSObject <ErrorCallback>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleError:(id)a0;

@end
