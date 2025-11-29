@class NSString;

@interface NewLifeSelectIdentityHandler : NewLifeActionHandler <WCActionSheetDelegate>

@property (nonatomic) unsigned long long identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleRequest:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;

@end
