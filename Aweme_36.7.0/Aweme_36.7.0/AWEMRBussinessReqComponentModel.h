@class NSDictionary, NSArray, NSString;

@interface AWEMRBussinessReqComponentModel : NSObject

@property (copy, nonatomic) NSDictionary *originDsl;
@property (retain, nonatomic) id originModel;
@property (copy, nonatomic) NSArray *registerInfo;
@property (copy, nonatomic) id /* block */ AWEMessageReachShowInterruptCallback;
@property (copy, nonatomic) id /* block */ AWEMessageReachBadgeShowCallback;
@property (copy, nonatomic) id /* block */ AWEMessageReachBadgeHideCallback;
@property (copy, nonatomic) id /* block */ AWEMessageReachBadgeDowngradeCallback;
@property (copy, nonatomic) id /* block */ AWEMessageReachBubbleShowCallback;
@property (copy, nonatomic) id /* block */ AWEMessageReachBubbleDismissCallback;
@property (copy, nonatomic) id /* block */ AWEMessageReachBubbleClickCallback;
@property (copy, nonatomic) NSString *bizSource;

- (void).cxx_destruct;

@end
