@class UIViewController;
@protocol AWESearchHubbleDoubleListElementDelegate;

@interface AWESearchMidDCCommonInfoManager : NSObject

@property (weak, nonatomic) UIViewController<AWESearchHubbleDoubleListElementDelegate> *middleBaseVC;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
