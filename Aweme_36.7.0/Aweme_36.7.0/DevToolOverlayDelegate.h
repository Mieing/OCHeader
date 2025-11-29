@protocol OverlayService;

@interface DevToolOverlayDelegate : NSObject

@property (retain, nonatomic) id<OverlayService> service;

+ (id)sharedInstance;

- (id)getAllVisibleOverlaySign;
- (void).cxx_destruct;
- (void)initWithService:(id)a0;

@end
