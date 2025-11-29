@class NSString;

@interface CAKToastImpl : NSObject <CAKToastProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showToast:(id)a0 onView:(id)a1;
- (void)showToast:(id)a0;
- (void)showError:(id)a0;

@end
