@class IESECTabKitBFFController, NSString;

@interface IESECTabKitDIContext : IESECContext <IESECDIContext>

@property (readonly, weak, nonatomic) IESECTabKitBFFController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;

@end
