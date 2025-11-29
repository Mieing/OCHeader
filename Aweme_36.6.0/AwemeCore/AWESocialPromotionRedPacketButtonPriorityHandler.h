@class NSString;

@interface AWESocialPromotionRedPacketButtonPriorityHandler : NSObject <AWEPlayInteractionSpecialButtonPriorityHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)shouldActivateSpecialButtonWithData:(id)a0 context:(id)a1;

@end
