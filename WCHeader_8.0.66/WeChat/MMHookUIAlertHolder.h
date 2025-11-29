@class NSString, NSMutableSet;

@interface MMHookUIAlertHolder : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableSet *alertViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
