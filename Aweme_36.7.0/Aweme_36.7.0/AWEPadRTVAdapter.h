@class NSString;

@interface AWEPadRTVAdapter : NSObject <AWEPadRTVAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (BOOL)performExecution:(id /* block */)a0;
- (id)weakTarget;

@end
