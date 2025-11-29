@class NSString, UIScrollView, UIView, UIViewController;

@interface WCFinderArbitraryPageInfo : NSObject

@property (nonatomic) BOOL isVC;
@property (nonatomic) long long idx;
@property (retain, nonatomic) UIView *bannerView;
@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) UIViewController *pageVC;
@property (weak, nonatomic) UIScrollView *innerScrollView;
@property (retain, nonatomic) NSString *viewIdentifier;
@property (nonatomic) long long lifeStep;
@property (nonatomic) void /* function */ *viewWillAppear;
@property (nonatomic) void /* function */ *viewDidAppear;
@property (nonatomic) void /* function */ *viewWillDisappear;
@property (nonatomic) void /* function */ *viewDidDisappear;

- (void).cxx_destruct;

@end
