@class NSDictionary, NSString;
@protocol AWEUGPushGuideLifeCycleProtocol;

@interface AWEUGPushGuideConfig : NSObject

@property (retain, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) double timeDelay;
@property (copy, nonatomic) NSDictionary *blockedViewControllers;
@property (copy, nonatomic) NSDictionary *allowedViewControllers;
@property (retain, nonatomic) id<AWEUGPushGuideLifeCycleProtocol> lifeCycleDelegate;
@property (nonatomic) unsigned long long unselectiveViewStyle;
@property (nonatomic) unsigned long long selectiveViewStyle;
@property (nonatomic) BOOL needToast;

- (void).cxx_destruct;
- (id)init;

@end
