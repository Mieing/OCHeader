@class AWENearbyActionView, NSString;

@interface AWENearbyActionEventHandler : NSObject <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWENearbyActionView *actionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)monitoringView:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
