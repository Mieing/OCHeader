@class NSString;

@interface MMFinderLiveKSKitLoger : NSObject <TSKLogProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logLevel:(unsigned long long)a0 inPosition:(struct _TSKLogPosition { char *x0; char *x1; int x2; })a1 withMessage:(id)a2;
- (void)dealloc;

@end
