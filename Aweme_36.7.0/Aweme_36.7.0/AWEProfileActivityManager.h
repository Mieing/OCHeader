@class NSString;

@interface AWEProfileActivityManager : NSObject <AWEProfileActivityManagerProtocol>

@property (nonatomic) BOOL showProfileActivityTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)snapshotForView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
+ (void)snapshotImage:(id)a0 completion:(id /* block */)a1;
+ (id)sharedInstance;

- (id)init;

@end
