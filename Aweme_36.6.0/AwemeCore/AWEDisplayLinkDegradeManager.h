@class NSObject;
@protocol OS_dispatch_source;

@interface AWEDisplayLinkDegradeManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *longLogTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *highFreqTimer;

+ (id)sharedManager;

- (void)runLoopCallback;
- (void)runLoopCallbackMergeImp;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
