@class NSString;

@interface TTAccountTrace : NSObject

@property (copy) NSString *traceId;
@property (copy) NSString *scene;
@property (copy) NSString *uuid;

+ (id)sharedInstance;

- (void)startTraceWithScene:(id)a0;
- (void)stopTraceWithScene:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
