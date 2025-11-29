@class AWEFeedPicoVRViewController, NSString, AWEAwemeModel, UIViewController;
@protocol AWEDPlayerFeedViewControllerProtocol;

@interface AWEFeedPicoVRContext : NSObject

@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) AWEFeedPicoVRViewController *controller;
@property (weak, nonatomic) UIViewController<AWEDPlayerFeedViewControllerProtocol> *playerViewController;
@property (weak, nonatomic) AWEAwemeModel *model;

- (void).cxx_destruct;
- (id)initWithPlayerController:(id)a0;

@end
