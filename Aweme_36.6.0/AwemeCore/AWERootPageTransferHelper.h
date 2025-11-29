@class NSString;

@interface AWERootPageTransferHelper : NSObject <AWERootPageTransferHelpProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)switchToRootPage:(unsigned long long)a0 withParams:(id)a1;
+ (void)landingFamiliar;
+ (long long)currentFeedVCType;
+ (BOOL)isSwitchToRootPageNeeded:(unsigned long long)a0;


@end
