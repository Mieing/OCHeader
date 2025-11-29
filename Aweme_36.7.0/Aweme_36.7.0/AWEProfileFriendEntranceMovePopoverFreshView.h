@class NSString;

@interface AWEProfileFriendEntranceMovePopoverFreshView : UIView <DUXPopoverContent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxPopover_view;
- (void)p_setupUIWithTitle:(id)a0 subTitle:(id)a1 confirmTitle:(id)a2 confirmCallback:(id /* block */)a3;
- (id)initWithTitle:(id)a0 subTitle:(id)a1 confirmTitle:(id)a2 confirmCallback:(id /* block */)a3;

@end
