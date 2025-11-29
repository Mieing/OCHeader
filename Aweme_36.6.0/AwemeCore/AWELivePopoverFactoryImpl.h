@class NSString, DUXPopover;

@interface AWELivePopoverFactoryImpl : NSObject <IESLivePopoverFactory>

@property (retain, nonatomic) DUXPopover *popover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)generatePopoverOnView:(id)a0 Model:(id)a1;
- (void)dismiss;
- (void).cxx_destruct;

@end
