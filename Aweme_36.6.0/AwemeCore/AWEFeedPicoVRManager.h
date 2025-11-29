@class UIViewController, NSMutableDictionary;
@protocol AWEDPlayerFeedViewControllerProtocol;

@interface AWEFeedPicoVRManager : NSObject

@property (retain, nonatomic) UIViewController<AWEDPlayerFeedViewControllerProtocol> *playerViewController;
@property (retain, nonatomic) NSMutableDictionary *itemIDVRConfigDict;

+ (id)generateVRConfigDictKeyByPlayer:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
