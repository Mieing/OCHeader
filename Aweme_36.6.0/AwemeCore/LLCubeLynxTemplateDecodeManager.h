@class NSObject;
@protocol OS_dispatch_queue;

@interface LLCubeLynxTemplateDecodeManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue;

+ (id)sharedInstance;

- (void)preDecodeTemplateForURL:(id)a0 pageScene:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
