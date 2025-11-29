@class NSDictionary, NSString, UIView;

@interface AWEAdFeedFPSMonitorContext : NSObject <AWEAdFeedFPSMonitorContext>

@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *componentName;
@property (copy, nonatomic) NSString *componentUrl;
@property (weak, nonatomic) UIView *monitorView;
@property (nonatomic) BOOL avoidCheckShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
