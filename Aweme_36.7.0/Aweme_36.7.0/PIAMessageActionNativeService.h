@class NSString;

@interface PIAMessageActionNativeService : NSObject <PIAMessageActionNativeService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)invokeNativeAPI:(id)a0 engine:(id)a1 href:(id)a2;

@end
