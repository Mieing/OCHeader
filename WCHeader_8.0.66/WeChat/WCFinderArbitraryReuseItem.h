@class NSString, UIView, UIViewController;

@interface WCFinderArbitraryReuseItem : NSObject

@property (retain, nonatomic) WCFinderArbitraryReuseItem *next;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIViewController *vc;

- (void).cxx_destruct;

@end
